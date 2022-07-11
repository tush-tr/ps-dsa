#include <bits/stdc++.h>
using namespace std; 

bool pairsum(int arr[], int n,int k){
    // O(N^2)
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == k){
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}

bool pairSumOptimized(int arr[], int N, int k){
    // O(N)
    int high = N-1;
    int low = 0;
     while(low<N-1 && high>0){
        if((arr[high]+arr[low])==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        if((arr[high]+arr[low])<k){
            low++;
        }
        if((arr[high]+arr[low])>k){
            high--;
        }
    } 
    return false;
}

int main(){
    int arr[8] = {2,4,7,11,14,16,20,21};
    int k=31;
    int N = 8;
    cout<<pairSumOptimized(arr,8,k)<<endl;
    cout<<pairsum(arr,8,k)<<endl;
}