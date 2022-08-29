#include <bits/stdc++.h>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

int main()
{
    struct Array arr;
    cout << "Enter the size of array: " << endl;
    cin >> arr.size;
    arr.A = new int[arr.size];
    int n;
    cout << "Enter the number of elements:" << endl;
    cin >> n;
    arr.length = 0;
    for (int i = 0; i < n; i++)
    {
        arr.A[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr.A[i] << endl;
    }
}