#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int num[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (num[j] > num[j + 1])
            {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = num[j];
            }
        }
    }
}

int main()
{
    int num[6] = {12, 23, 34, 26, 45,35};
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (num[j] > num[j + 1])
            {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = num[j];
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << num[i] << endl;
    }
}