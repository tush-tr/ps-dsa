#include <bits/stdc++.h>
using namespace std; 

int main(){
    string s = "finding";
    int H = 0;
    for(int i=0;i<s.length();i++){
        if((H &(1<<(s[i]-97)))>0){
            cout<<s[i]<<endl;
        }
        else{
            H |= (1<<(s[i]-97));
        }
    }
}