#include <bits/stdc++.h>
using namespace std; 

int pow(int n,int p){
    if(p==1){
        return n;
    }
    return n * pow(n,p-1);
}

int powB(int n,int p){
    if(p==1){
        return n;
    }
    if((p&1)==0){
        return powB(n*n,p/2);
    }
    return n*powB(n*n,(p-1)/2);
}
int main(){
    cout<<powB(2,3)<<endl;
}