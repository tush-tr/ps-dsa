#include <bits/stdc++.h>
using namespace std;

/*
Brute force method to solve this using recursion
2^4 = 2 * 2 * 2 * 2
a^n = a * a * a * a * ........ n times
Pow(a,n) = (a * a * a * .....n-1 times)*a
Pow(a^n) = Pow(a,n-1) * a
*/
int pow(int a, int b)
{
    if (b == 1)
    {
        return a;
    }
    return pow(a, b - 1) * a;
}

/*
Optimize the approach, break into parts

pow(2,4) = 2 * 2 * 2 * 2
pow(2,4) = (2 * 2)^2
pow(2,4) = pow(2 * 2, 2)
pow(2,5) = 2 * pow(2 * 2, 2)

if n = even:
pow(a,n) = pow(a*a,n/2)

if n = odd:
pow(a,n) = a  * pow(a*a, (n-1)/2)

*/


int powOptimiized(int a, int b){
    if(b==1){
        return a;
    }
    if((b&1)==0){
        return powOptimiized(a*a,b/2);
    }
    return a*powOptimiized(a*a,(b-1)/2);
}

// If n is less than 0 so we can say it like
// 2 ^ -1 = 1/(2^1)
// pow(a,n) = 1 / pow(a,-(n))
int solution(int a, int b){
    if(b<0){
        return 1/powOptimiized(a,abs(b));
    }
    return powOptimiized(a,b);
}

int main()
{
    cout << solution(6, -2) << endl;
}