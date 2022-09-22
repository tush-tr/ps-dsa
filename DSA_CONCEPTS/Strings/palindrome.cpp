#include <bits/stdc++.h>
using namespace std; 
bool isPalindrome(string s){
    int j = s.length()-1;
    int i=0;
    while(i!=j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    cout<<isPalindrome("madams")<<endl;

}