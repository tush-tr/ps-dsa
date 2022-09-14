#include <bits/stdc++.h>
using namespace std;

int mxElement(int A[], int n)
{
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, A[i]);
    }
    return mx;
}

int main()
{
    int A[11] = {9, 19, 8, 6, 10, 12, 13, 16, 17, 18, 7};
    int mx = mxElement(A, 11);
    int H[mx];
    for (int i = 0; i < mx; i++)
    {
        H[i] = 0;
    }
    for (int i = 0; i < 11; i++)
    {
        H[A[i]]++;
    }
    for (int i = 6; i < mx; i++)
    {
        if (H[i] == 0)
        {
            cout << i << endl;
        }
    }
}