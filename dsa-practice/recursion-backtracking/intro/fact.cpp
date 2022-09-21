#include <bits/stdc++.h>
using namespace std; 

int fac(int n){
    if(n<2){
        return n;
    }
    return n*fac(n-1);
}

int main(){
    cout<<fac(5)<<endl;
}