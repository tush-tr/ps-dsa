#include <bits/stdc++.h>
using namespace std; 

/* 
Given a square matrix A & it's number of rows(or columns) N, return the transpose of A.
The transpose of a matrix is the matrix flipped over it's main diagonal, switching the row and column indices of the matrix.

*/

int main(){
    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    


    // Using Space: another array
    // int res[3][3];
    // for(int row=0;row<3;row++){
    //     for(int col=0;col<3;col++){
    //         res[col][row] = A[row][col];
    //     }
    // }


    // for(int row=0;row<3;row++){
    //     for(int col=0;col<3;col++){
    //         cout<<res[row][col]<<endl;
    //     }
    // }
    // ________________________________________


    for(int row=0;row<3;row++){
        for(int col=row;col<3;col++){
            // swap
            int temp = A[row][col];
            A[row][col] = A[col][row];
            A[col][row] = temp;
        }
    }
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<A[row][col]<<endl;
        }
    }
     


}