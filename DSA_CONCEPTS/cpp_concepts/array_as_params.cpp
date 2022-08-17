#include <bits/stdc++.h>
using namespace std;

void fun(int A[], int n)
{
    // cout << sizeof(A) / sizeof(int) << endl; // this will output 2 because it will assume size of A as 8 because here inside the function A is pointer.
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    A[0] = 55;
}

int *createArray(int n)
{
    int *p;
    p = new int[n];
    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;
    }
    return p;
}

int main()
{
    int A[] = {2, 3, 6, 8, 10};
    int n = 5;
    cout << sizeof(A) / sizeof(int) << endl;

    fun(A, n);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    int *ptr;
    int size = 5;
    ptr = createArray(size);
    for(int i=0;i<size;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;

}