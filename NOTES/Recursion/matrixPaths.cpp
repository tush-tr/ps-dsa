#include <bits/stdc++.h>
using namespace std;

/*
There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]). 
The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either 
down or right at any point in time.Given the two integers m and n, return the number of possible unique paths 
that the robot can take to reach the bottom-right corner.
*/

// Solving it using recursion, for better solution we can use dynamic programming in it.

int count(int m,int n){
    if(m==1 || n==1){
        return 1;
    }
    return count(m-1,n)+count(m,n-1);
}

int main()
{
    cout<<count(3,7)<<endl;
    
}