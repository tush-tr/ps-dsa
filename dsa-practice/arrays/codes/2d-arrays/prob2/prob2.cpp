#include <bits/stdc++.h>
using namespace std;

/*
given two 2-d arrays of sizes n1Xn2 and n2Xn3. Your task is to multiply
these matrices and output the  multiplied matrix.

APPROACH:
1. Make a nested loop of order 3. In the outer loop iterate over rows of first
matrix and in the inner loop iterate over columns of second matrix.
2. Multiply rows of first matrix with columns of second matrix in the
innermost loop and update in the answer matrix.
 */

int main()
{
    int m1[3][4] = {{2, 4, 1, 2}, {8, 4, 3, 6}, {1, 7, 9, 5}};
    int m2[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {4, 5, 6}};
    int mul[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            mul[i][j]=0;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            for(int e=0;e<4;e++){
                mul[i][j] += m1[i][e]*m2[e][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<mul[i][j]<<endl;
        }
    }
}