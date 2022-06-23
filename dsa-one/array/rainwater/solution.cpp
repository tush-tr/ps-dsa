#include <bits/stdc++.h>
using namespace std; 

int main(){
    int arr[8] = {3,1,2,4,0,1,3,2};
    int left[8];
    int right[8];
    for(int i=0;i<8;i++){
        if(i==0){
            left[i]=arr[i];
        }else{
        left[i] = max(left[i-1],arr[i]);
        } 
    }
    for(int i=7;i>=0;i--){
        if(i==7){
            right[i]=arr[i];
        }else{

        right[i]=max(right[i+1],arr[i]);
        }
    }
    // for(int i=0;i<8;i++){
    //     cout<<"LEFT: "<<left[i]<<" RIGHT: "<<right[i]<<endl;
    // }
    int totalWater =0;
    for(int i=0;i<8;i++){
        totalWater += min(left[i],right[i])-arr[i];
    }
    cout<<totalWater<<endl;
}