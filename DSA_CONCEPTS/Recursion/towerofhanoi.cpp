#include <bits/stdc++.h>
using namespace std; 

void TOH(int n,char a,char b, char c){
    if(n>0){
        TOH(n-1,a,c,b);
        cout<<"from "<<a<<" to "<<c<<endl;
        TOH(n-1,b,a,c);
    }
}

int main(){
    char a='A',b='B',c='C';
    TOH(3,a,b,c);
    

}