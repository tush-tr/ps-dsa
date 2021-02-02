#include<iostream>
using namespace std;
void sieveoferatosthenes(int n){
    bool isprime[n+1];
    for(int i=0;i<(n+1);i++){
        isprime[i] = true;
    }
    isprime[0] = false;
    isprime[1] = false;
    for(int i=2;i*i<=n;i++){
        for(int j= 2*i;j<=n;j+=i){
            isprime[j] = false;
        }
    }
    for(int p = 2; p <= n; p++)
        if (isprime[p])
            cout << p << " ";
}
int main(){
    sieveoferatosthenes(12);

}