#include <bits/stdc++.h>
using namespace std; 

int usingSpaceMxProfit(int A[], int N){
    // TC: O(N)
    // SPACE: O(N)
    int aux[7];
    for(int i=N-1;i>=0;i--){
        if(i==N-1){
            aux[i]=A[i];
        }
        if(A[i]>aux[i+1]){
            aux[i]=A[i];
        }else{
            aux[i]=aux[i+1];
        }
    }
    int mxProfilt = 0;
    for(int i=0;i<N;i++){
        if(aux[i]-A[i]>mxProfilt){
            mxProfilt = aux[i]-A[i];
        }
    }
    return mxProfilt;
}

int main(){
    int A[7] = {3,1,4,8,7,2,5};
    

    // O(n^2)
    // int max = 0;
    // int ans;
    // for(int i=0;i<5;i++){
    //     for(int j=i+1;j<6;j++){
    //         if(max<arr[j]-arr[i]){
    //             max = arr[j]-arr[i];
    //             ans = j+1;
    //         }
    //     }
    // }
    // cout<<ans<<endl;

    // optimize
    // 1: using space ; use a aux array
    
    int mxProfit = usingSpaceMxProfit(A,7);
    cout<<"MAX PROFIT using space: "<<mxProfit<<endl;

    // 2: Optimize more: TC: O(N) and space should be constant: O(1)
    int minPrize = INT_MAX;
    int mxPrize = 0;
    for(int i=0;i<7;i++){
        minPrize = min(minPrize,A[i]);
        int currProfit = A[i]-minPrize;
        mxPrize = max(mxPrize,currProfit);
    }
    cout<<mxPrize<<endl;
}