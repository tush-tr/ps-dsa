#include<bits/stdc++.h>
using namespace std;
int jos(int n,int k){
    // base case
    if(n==1){
        return 0;
    }
    return (jos(n-1,k)+k)%n;
}
int main(){
    cout<<jos(5,3)<<endl;
    
}