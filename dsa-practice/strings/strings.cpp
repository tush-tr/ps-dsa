#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    string s = "Tushar"; //declaring a string
    // string st(10); // declares a string of 10 size
    string sn(4,'N'); //It declares a string of size 5 with all characters ‘N’.
    string mystr;

    // Throwing output a string
    cout<<str<<endl;
    cout<<s<<endl;
    // cout<<st<<endl;
    cout<<sn<<endl;

    // Taking input a string
    cin>>str;
    // Taking input with spaces
    getline(cin,mystr);
    cout<<mystr<<endl;
    return 0;
}