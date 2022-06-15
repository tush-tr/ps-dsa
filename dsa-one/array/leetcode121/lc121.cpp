#include <bits/stdc++.h>
using namespace std; 

int main(){
    int arr[5] = {7,6,4,3,1};
    int max = 0;
    int ans;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<6;j++){
            if(max<arr[j]-arr[i]){
                max = arr[j]-arr[i];
                ans = j+1;
            }
        }
    }
    cout<<ans<<endl;

}