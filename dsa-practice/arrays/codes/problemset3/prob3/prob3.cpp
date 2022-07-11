#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n)
{
    int currSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int main()
{
    // int arr[7] = {4, -4, 6, -6, 10, -11, 12};
    int arr[4] = {1, -2, 3, -2};
    // TODO: get the total sum of the original array
    int totalSum = 0;

    // TODO: Find the nonWrap elements sum
    int nonWrapSum = kadane(arr,4);
    
    // TODO: Get the sum of non-contributing elements
    // 1- Reverse the signs of all element(positive to negative/negative to positive)
    for (int i = 0; i < 4; i++)
    {
        totalSum += arr[i];
        arr[i] = -(arr[i]);
    }

    // 2 - Apply kadane's algorithm to get the sum of non-contributing elements
    int nonContributingSum = kadane(arr, 4);

    // TODO:  Max Subarray sum = Total sum  of array - Sum of non-contributing elements
    int wrapSum = totalSum + nonContributingSum;
    cout << "MAX SUBARRAY SUM: " << max(wrapSum,nonWrapSum) << endl;
}