#include <bits/stdc++.h>
using namespace std; 

int main(){
    int *p,*q;
    p = new int[5];
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;
    for(int i=0;i<5;i++){
        cout<<p[i]<<" ";
    }
    // 3 5 7 9 11 
    cout<<endl;
    // larger array
    q = new int[10];
    for(int i=0;i<5;i++){
        q[i] = p[i];
    }
    delete[] p;
    q[5] = 13;
    q[6] = 15;
    for(int i=0;i<7;i++){
        cout<<q[i]<<" ";
    }
    cout<<endl;
    // 3 5 7 9 11 13 15 



}