#include<iostream>
using namespace std;
int main(){
    unsigned int a = 60; // 60 = 00111100
    unsigned int b = 13; // 13 = 00001101
    int c = 0;
    c = a&b;
    cout<<"Value of 60 & 13: "<<c<<endl;

    c = a|b;
    cout<<"Value of 60 | 13: "<<c<<endl;

    c = a^b;
    cout<<"Value of 60 ^ 13: "<<c<<endl;

    c = ~a;
    cout<<"Value of ~60: "<<c<<endl;

    c = a<<2;
    cout<<"Value of 60 << 2: "<<c<<endl;

    c = a>>2;
    cout<<"Value of 60 >> 2: "<<c<<endl;
    return 0;
}