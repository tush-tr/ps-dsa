#include <bits/stdc++.h>
using namespace std; 


// Pass by Value
int add(int a, int b){
    int c;
    c = a+b;
    return c;
}

// Pass by Address
// if we are changing some variable's value
int changeA(int a){
    a++;
    return 0;
}
int modifyVariable(int *a){
    *a = *a+1;
    return 0;
}
void swapCallByAddress(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call By Reference(Only in C++)
void swapCallByRef(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 123;
    int b = 12;
    cout<<add(a,b)<<endl;

    changeA(a);
    cout<<a<<endl; // it will not modify actual variable
    modifyVariable(&a);
    cout<<a<<endl;

    int x = 10;
    int y = 15;
    cout<<"Value of x: "<<x<<" Value of y: "<<y<<endl;
    swapCallByAddress(&x,&y);
    cout<<"___________After swapping x and y using call by address function___________"<<endl;
    cout<<"Value of x: "<<x<<" Value of y: "<<y<<endl;
    cout<<"___________After Swapping x and y using call by reference___________"<<endl;
    swapCallByRef(x,y);
    cout<<"Value of x: "<<x<<" Value of y: "<<y<<endl;
    

}