#include <bits/stdc++.h>
using namespace std;

int mxSumBruteForce(int arr[], int N)
{
    int mxSum = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        int sum = 0;
        for (int j = i; j < N; j++)
        {
            sum += arr[j];
            mxSum = max(mxSum, sum);
        }
    }
    return mxSum;
}

int getMxSumArray(int arr[], int N, int &mxStart, int &mxEnd)
{
    int mxSum = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        int sum = 0;
        for (int j = i; j < N; j++)
        {
            sum += arr[j];
            if (sum > mxSum)
            {
                mxStart = i;
                mxEnd = j;
                mxSum = sum;
            }
        }
    }
    return mxSum;
}

int cumulativeSum(int arr[], int N)
{
}

int main()
{
    int arr[4] = {-1, 4, 7, 2};

    // Brute Force method
    int mxStart, mxEnd;
    int mxSum = getMxSumArray(arr, 4, mxStart, mxEnd);
    cout << "MAX SUM: " << mxSum << endl;
    for (int i = mxStart; i <= mxEnd; i++)
    {
        cout << arr[i] << endl;
    }

    // Optimize: Kadane's Algorithm
}