#include <bits/stdc++.h>
using namespace std; 

int sum(int A[],int n){
    static int s = 0;
    if(n>=0){
        s += A[n];
        sum(A,n-1);
    }
    return s;
}

int main(){
    int A[10] = {1,2,3,4,5,6,8,9,10,11};
    int n = A[9];
    int totalSumOfN = (n*(n+1))/2;
    cout<<totalSumOfN-sum(A,9)<<endl;
    

}