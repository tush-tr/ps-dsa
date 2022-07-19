#include <bits/stdc++.h>
using namespace std;

/*
Given an nXm matrix.
write an algorithm to find that given value exists in the matrix or not.
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.
*/

int binarySearch(int arr[], int size, int element)
{
    int low = 0;
    int high = size;
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] > element)
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

int bruteForce(int *m[],int row,int col,int search){
    for (int row = 0; row < row; row++)
    {
        int col = binarySearch(m[row],col,search);
        if(col>0){
            cout<<row<<" "<<col<<endl;
        }
    }
}
int main()
{
    int m[4][4] = {{1, 4, 7, 11}, {2, 5, 8, 12}, {3, 6, 9, 16}, {10, 13, 14, 17}};

    // Binary Search on column
    bruteForce(m,4,4,4);

    // optimized approach

}