#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[10] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int k = 10;
    int H[16] = {0};
    for (int i = 0; i < 10; i++)
    {
        if (H[k - A[i]] > 0 && k - A[i] > 0)
        {
            cout << A[i] << " + " << k - A[i] << " = " << k << endl;
        }
        H[A[i]]++;
    }
}