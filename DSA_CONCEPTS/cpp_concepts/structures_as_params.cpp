#include <bits/stdc++.h>
using namespace std; 
struct Rectangle{
    int length;
    int breadth;
};

// Passing by Value:
int area(Rectangle r){
    return r.length*r.breadth;
}

// Passing by address:
void changeLength(Rectangle *r, int l){
    r->length=l;
}

// Passing by reference:
void changeBreadth(Rectangle &r,int b){
    r.breadth = b;
}

int main(){
    Rectangle r = {10,5};
    cout<<r.length<<" "<<r.breadth<<endl;
    cout<<area(r)<<endl;
    changeLength(&r,12);
    cout<<r.length<<" "<<r.breadth<<endl;
    changeBreadth(r,7);
    cout<<r.length<<" "<<r.breadth<<endl;
}