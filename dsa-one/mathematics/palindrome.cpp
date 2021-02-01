#include<iostream>
using namespace std;
int reverse(int n){
    int result = 0;
    while(n>0){
        int ld = n%10;
        result = result*10 + ld;
        n /= 10;
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    int rn = reverse(n);
    if(n==rn){
        cout<<"Number is palindrome"<<endl;
    }
    else{
        cout<<"Number is not palindrome"<<endl;
    }

    return 0;
}