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
    int currSum[N + 1];
    currSum[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        currSum[i] = currSum[i - 1] + arr[i - 1];
    }
    int maxSum = INT_MIN;
    for (int i = 1; i <= N; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = currSum[i] - currSum[j];
            maxSum = max(sum, maxSum);
        }
    }
    return maxSum;
}

int kadaneAlgo(int arr[], int N)
{
    int currSum = 0;
    int mxSum = arr[0];
    for (int i = 0; i < N; i++)
    {
        currSum += arr[i];
        mxSum = max(currSum, mxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    return mxSum;
}
int main()
{
    int arr[4] = {-1, 4, 7, 2};

    // Brute Force method
    int mxStart, mxEnd;
    int mxSum = getMxSumArray(arr, 4, mxStart, mxEnd);
    cout << "MAX SUM: " << mxSum << endl;
    cout << "MAX SUM: " << cumulativeSum(arr, 4) << endl;
    cout << "MAX SUM USING KADANE ALGO: " << kadaneAlgo(arr, 4) << endl;
    for (int i = mxStart; i <= mxEnd; i++)
    {
        cout << arr[i] << endl;
    }

    // Optimize: Kadane's Algorithm
}