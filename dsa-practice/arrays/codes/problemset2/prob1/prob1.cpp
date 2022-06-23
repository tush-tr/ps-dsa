#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n = 5;
    int arr[5]={1,3,4,3,4};
    int res;

    // O(n^2)
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j] && i==j){
                res=i;
            }
        }
    }
    // Solution:
    const int N = 1e6+2;
    int idx[N];
    for(int i=0;i<N;i++){
        idx[i]=-1;
    }
    int minIdx = INT_MAX;
    for(int i=0;i<n;i++){
        if(idx[arr[i]]!=-1){
            minIdx = min(minIdx,idx[arr[i]]);
        }
        else{
            idx[arr[i]]=i;
        }
    }
    cout<<minIdx<<endl;
}