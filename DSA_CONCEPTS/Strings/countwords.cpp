#include <bits/stdc++.h>
using namespace std; 

int main(){
    string s = "How are you";
    int words = 1;
    for(int i=0;i<s.length();i++){
        if(s[i]==' ' && s[i-1]!=' '){
            words++;
        }
    }
    cout<<words<<endl;

}