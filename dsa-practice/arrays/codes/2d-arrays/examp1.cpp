#include<iostream>
using namespace std;
int main(){
    // Taking input of rows and columns for an 2-d array
    int row,col;
    cin>>row>>col;

    // Initializing an 2-d array
    int arr[row][col];

    // Taking input of a 2-d array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<"Enter the elements for"<<i+1<<"th row: ";
            cin>>arr[i][j];
        }
        
    }

    // Printing the output of a 2-d array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}