#include <bits/stdc++.h>
using namespace std;

// Given an unsorted array A of size N of non-negative integers, 
// find a continuous subarray which adds to a given number S.

void bruteForce(int A[],int N, int S, int ans[]){
    // O(n^2)
    for(int i=0;i<N;i++){
        int sum=0;
        for(int j=i;j<N;j++){
            sum += A[j];
            if(sum==S){
                ans[0]=i+1;
                ans[1]=j+1;
                return;
            }
        }
    }
}

int main()
{
    int N = 5, S = 12;
    int A[]={1,2,3,7,5};
    // output should be 2,4[start index and last index of subarray]

    // TODO: Bruteforce
    int ans[2];
    bruteForce(A,N,S,ans);
    cout<<ans[0]<<" "<<ans[1]<<endl;

    // TODO: two pointers approach
    int st=-1,en=-1;
    int i=0,j=0;

    int currSum=0;
    while(j<N && currSum+A[j]<=S){
        currSum += A[j];
        j++;
    }
    if(currSum==0){
        cout<<i+1<<""<<j<<endl;
        return 0;
    }
    while(j<N){
        currSum += A[j];
        while(currSum>S){
            currSum -= A[i];
            i++;
        } 
        if(currSum==S){
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en<<endl;




}