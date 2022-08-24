#include <bits/stdc++.h>
using namespace std; 

int factorial(int n){
    if(n==0){
        return 1;
    }
    return factorial(n-1)*n;
}

int fC(int n, int r){
    int t1 = factorial(n);
    int t2 = factorial(r);
    int t3 = factorial(n-r);
    return t1/(t2*t3);
}
int C(int n,int r){
    if(n==r || r==0){
        return 1;
    }
    return C(n-1,r-1)+ C(n-1,r);
}

int main(){
    cout<<fC(5,5)<<endl;
    cout<<C(5,5)<<endl;


}