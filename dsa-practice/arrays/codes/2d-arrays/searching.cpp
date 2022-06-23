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

    //TODO:  ___Searching in a 2-D Array___
    // Take input the element we have to search
    int n;
    cout<<"Enter the element you want to search in this array: ";
    cin>>n;
    bool flag = false;

    // Searching
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j]==n){
                cout<<"Row of your element is: "<<i<<endl;
                cout<<"Column of your element is: "<<j<<endl;
                flag = true;
            }
        }
        
    }
    if(flag){
        cout<<"Element has found";
    }
    else{
        cout<<"Sorry element is not in the array";
    }
    cout<<endl;
    

    return 0;
}