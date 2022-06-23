#include<iostream>
using namespace std;
int main(){
    int *p = new int[10];
    // cout<<p<<endl;
    // cout<<p[0];
    for(int i=0;i<10;i++){
        cin>>p[i];
    }
    for(int i=0;i<10;i++){
        cout<<p[i]<<" "; 
    }
    // output== 1 2 3 4 5 6 7 8 9 11 
    delete[] p;
    cout<<"After deallocation: "<<endl;
    for(int i=0;i<10;i++){
        cout<<p[i]<<" "; 
    }
    // output - 0 0 1022308368 22003 5 6 7 8 9 11 --
    // why all memory blocks value is zero?
    return 0;
}