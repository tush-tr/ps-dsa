#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;
    cout << a << endl; // 10
    cout << "Using Pointers" << endl;
    cout << p << endl;  // address of a
    cout << *p << endl; // 10
    
    cout<<"ARRAYS WITH POINTERS"<<endl;
    // using arrays
    int A[5] = {2, 3, 51, 65, 34};
    int *p2;
    // two options
    // 1:
    // p = &A[0];
    // 2:
    p2 = A;
    for(int i=0;i<5;i++){
        cout<<p2[i]<<endl;
    }

    cout<<"CREATING ARRAY IN HEAP"<<endl;
    int *p3;
    p3 = (int *)malloc(5*sizeof(int));
    p3[0] = 10,p3[1]=21;p3[2]=24,p3[3]=55,p3[4]=12;
    for(int i=0;i<5;i++){
        cout<<p3[i]<<endl;
    }

    // in C++ syntax:
    p3 = new int[5];
    p3[0] = 10,p3[1]=21;p3[2]=24,p3[3]=55,p3[4]=12;
    for(int i=0;i<5;i++){
        cout<<p3[i]<<endl;
    }

    // deleting occupied memory:
    delete []p3; // c++
    free(p3); // C

    // others

}