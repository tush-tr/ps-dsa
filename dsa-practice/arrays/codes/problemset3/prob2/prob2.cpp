#include <bits/stdc++.h>
using namespace std; 



int main(){
    int arr[4] = {-1,4,7,2};
    int mxSum = INT_MIN;
    int mxStart, mxEnd;
    for(int i=0;i<4;i++){
        int sum=0;
        for(int j=i;j<4;j++){
            sum+=arr[j];
            if(sum>mxSum){
                mxStart = i;
                mxEnd = j;
                mxSum = sum;
            }
        }
    }
    for(int i=mxStart;i<=mxEnd;i++){
        cout<<arr[i]<<endl;
    }

}