#include<iostream>
using namespace std;
int qube(int n){
    return n*n*n;
}
int main(){
    int n;
    cin>>n;
    int sum=0;
    int original = n;
    while(n>0){
        int lastdigit = n%10;
        sum += qube(lastdigit);
        n=n/10;
    }
    if(sum==original){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not an armstrong number";
    }
    return 0;
}