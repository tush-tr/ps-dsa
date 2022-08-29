#include <bits/stdc++.h>
using namespace std;

// Iterative solution
int ibinSearch(int low, int high, int key, int A[])
{
    int mid;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (key == A[mid])
        {
            return mid;
        }
        if (key < A[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

// Recursive Solution
int rBinSearch(int low,int high,int key,int A[]){
    if(low<=high){
        int mid = (low+high)/2;
        if(key==A[mid]){
            return mid;
        }
        else if(key<A[mid]){
            return rBinSearch(low,mid-1,key,A);
        }
        else{
            return rBinSearch(mid+1,high,key,A);
        }
    }
    return -1;
}

int main()
{
    int arr[10] = {23, 27, 29, 31, 33, 37, 38, 42, 45, 55};
    cout<<ibinSearch(0,9,38,arr)<<endl;
    cout<<rBinSearch(0,9,38,arr)<<endl;
    
}