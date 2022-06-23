#include<iostream>
using namespace std;
int main(){
    int a = 10; // stored in stack
    int *p = new int(); // allocate memory for an integer value in heap
    *p = 10;  
    cout<<*p<<endl;
    delete(p); // deallocate memory
    cout<<*p<<endl; // it will become 0 
    cout<<p<<endl; // shows address of pointer(dangling pointer)
    // TODO: Create an array using dynamic memory allocation
    p = new int[10]; // allocate memory for an array of 10 integers in heap
    delete[]p; // deallocate the full array memory
    p = NULL; // for removing the pointer
    return 0;
}