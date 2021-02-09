#include<iostream>
using namespace std;
// Calculate factorial print result modulo of M where 
// M = 1000000007
int main(){
    int M = 1000000007;
    int n;
    cin>>n;
    int fact = 1;
    for(int i=2;i<=n;i++){
        fact = (fact*i)%M;
    }
    cout<<fact<<endl;
}