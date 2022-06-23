// Given a string, convert to lower or upper case.
// [difference between lowercase-uppercase ascii code is 32]
#include <bits/stdc++.h>
using namespace std; 

void convertUpperCase(string &str){
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
    }
}
void convertLowerCase(string &str){
    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
    }
}

int main(){
    string str = "aiooeEfuijoiIEInoieo";
    transform(str.begin(),str.end(),str.begin(),::toupper);
    // convertUpperCase(str);
    cout<<str<<endl;
    convertLowerCase(str);
    cout<<str<<endl;
}