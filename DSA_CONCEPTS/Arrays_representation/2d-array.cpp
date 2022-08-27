#include <bits/stdc++.h>
using namespace std;

int main()
{

    // in stack only:
    int A[3][4] = {{1, 2, 3, 4}, {2, 3, 4, 5}, {6, 7, 8, 4}};

    // partially in stack and partially in heap
    int *B[3];
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];


    // completely in heap
    int **C;
    C = new int *[3];
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];
}