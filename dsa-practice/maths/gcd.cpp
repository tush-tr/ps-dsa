#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a%b == 0){
        return b;
    }
    return gcd(b,(a%b));
}
int main(){
    cout<<gcd(42,24)<<endl;
    return 0;
}