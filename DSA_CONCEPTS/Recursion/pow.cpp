#include <bits/stdc++.h>
using namespace std; 

int powA(int m,int n){
    if(n==0){
        return 1;
    }
    return powA(m,n-1)*m;
}

int powB(int m,int n){
    if(n==0){
        return 1;
    }
    if((n&1)==0){
        return powB(m*m,n/2);
    }
    return m*powB(m*m,(n-1)/2);
}

int main(){
    cout<<pow(2,5)<<endl;
    cout<<powA(2,5)<<endl;
    cout<<powB(2,5)<<endl;

}