#include <bits/stdc++.h>
using namespace std; 

int main(){
    int arr[8] = {5,2,7,3,6,1,2,4};
    int localMin=0;
    int localMax=0;
    int mxProfit = 0;
    for(int i=1;i<8;i++){
        if(arr[i]>arr[i-1]){
            mxProfit += (arr[i]-arr[i-1]);
        }
    }
    cout<<mxProfit<<endl;
}