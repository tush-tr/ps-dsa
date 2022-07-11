#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[7] = {4, -4, 6, -6, 10, -11, 12};
    // TODO: get the total sum of the original array
    int totalSum = 0;
    // TODO: Get the sum of non-contributing elements
    // 1- Reverse the signs of all element(positive to negative/negative to positive)
    for (int i = 0; i < 7; i++)
    {
        totalSum += arr[i];
        arr[i] = -(arr[i]);
    }

    // 2 - Apply kadane's algorithm to get the sum of non-contributing elements
    int currSum = 0;
    int nonContributingSum = arr[0];
    for (int i = 0; i < 7; i++)
    {
        currSum += arr[i];
        nonContributingSum = max(nonContributingSum, currSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }

    // TODO:  Max Subarray sum = Total sum  of array - Sum of non-contributing elements
    cout << "MAX SUBARRAY SUM: " << totalSum - (-nonContributingSum) << endl;
}