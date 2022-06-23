#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n = 6;
    int arr[6] = {0,-9,1,3,-4,5};
    int check[n];
    for(int i=0;i<n;i++){
        check[i]=0;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            check[arr[i]]=1;
        }
    }
    int ans = -1;
    for(int i=1;i<n;i++){
        if(check[i]==0){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;


}