#include <bits/stdc++.h>
using namespace std; 

void reverse(string &s){
    int j = s.length()-1;
    int i=0;
    while(i!=j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
}
int main(){
    string st = "welcome";
    reverse(st);
    cout<<st<<endl;
}