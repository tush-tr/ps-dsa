#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s, int l, int r){
    // base case
    if(l>=r){
        return true;
    }
    if(s[l]!=s[r]){
        return false;
    }
    return palindrome(s, l+1,r-1);
}
int main(){
    if(palindrome("aba",0,2)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not palindrome"<<endl;
    }

}