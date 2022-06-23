/* : We have to print the given 2D matrix in the spiral order.
 Spiral Order means that firstly, first row is printed, then 
 last column is printed, then last row is printed and then 
 first column is printed, then we will come inwards in the similar way.
 _________Logic:--
 We have an array of n*m size:-

 we need four variables:
 1. row-start(initially 0)
 2. row-end(initially, n-1)
 3. column-start(initially,0)
 4. column-end(initially,m-1)

 Traversal:--
 1. row-start+1
 2. column-end -1
 3. row-end -1
 4. column-start+1
 
 
  */

#include <iostream>
using namespace std;
int main()
{
    // Taking input of rows and columns for an 2-d array
    int row, col;
    cin >> row >> col;

    // Initializing an 2-d array
    int arr[row][col];

    // Taking input of a 2-d array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // TODO: Spiral Order
    int row_start=0,row_end = row-1,column_start = 0, column_end = col-1;
    while(row_start<=row_end && column_start<=column_end)
    {
        // for row start
        for(int col = column_start;col<=column_end;col++)
        {
            cout<<arr[row_start][col] <<" ";
        }
        row_start++;
        // for column end
        for (int row = row_start; row <= row_end; row++)
        {
            cout<<arr[row][column_end]<<" ";
            /* code */
        }
        column_end--;
        // for row end
        for(int col = column_end;col>=column_start;col--){
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;
        // for column start
        for (int row = row_end; row >=row_start; row--)
        {
            /* code */
            cout<<arr[row][column_start]<<" ";
        }
        column_start++;
    }
    return 0;
}