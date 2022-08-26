#include <bits/stdc++.h>
using namespace std; 

void printAllSubArrays(int arr[], int n){
     for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" , ";
            }
            cout<<endl;
        }
    }
}

int main(){
    int arr[4] = {4,2,1,3};

    // print all possible subarrays
    printAllSubArrays(arr,4);

}