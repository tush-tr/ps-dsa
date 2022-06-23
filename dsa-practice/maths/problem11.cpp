#include<iostream>
using namespace std;
void primefactor(int n){
    // spf[i] = smallest prime factor of i
    int spf[n+1] = {0};
    // adding spf of every number in the array- spf(2)=2, spf(3)=3....
    for(int i=2;i<=n;i++){
        spf[i] = i;
    }

    // Use sieve of eratosthenes algorithm
    for(int i=2;i*i<=n;i++){
        if(spf[i]==i){
            for (int j= i*i;j<=n ; j+=i) {
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }

    while(n!=1){
        cout<<spf[n]<<" ";
        n = n/spf[n]; 
    }
}
int main(){
    primefactor(42);
}