#include <bits/stdc++.h>
using namespace std; 

bool isValid(string s){
    for(int i=0;i<s.length();i++){
        if(!(s[i]>=65 && s[i]<=90) && !(s[i]>=97 && s[i]<=122) && !(s[i]>=48 && s[i]<=57)){
            return false;
        }
    }
    return true;
}

int main(){
    string s = "pass232w";
    cout<<isValid(s)<<endl;

}