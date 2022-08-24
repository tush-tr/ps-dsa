#include <bits/stdc++.h>
using namespace std;

int fibA(int n)
{
    if(n<=1)
      return n;
    return fibA(n-2)+fibA(n-1);
}
int fibB(int n){
    if(n<=1)
      return n;
    
    int t0 = 0;
    int t1 = 1;
    int s;
    for(int i=2;i<=n;i++){
        s = t0+t1;;
        t0 = t1;
        t1 = s;
    }
    return s;
    
}

int F[10];

int mfib(int n){
    if(n<=1){
        F[n] = n;
        return n;
    }
    else{
        if(F[n-1]==-1){
            F[n-1] = mfib(n-1);
        }
        if(F[n-2] == -1){
            F[n-2] = mfib(n-2);
        }
        return F[n-1]+F[n-2];
    }
}

int main()
{
    cout<<fibA(5)<<endl;
    cout<<fibB(5)<<endl;
    for(int i = 0;i<=10;i++){
        F[i] = -1;
    }
    cout<<mfib(5)<<endl;

}