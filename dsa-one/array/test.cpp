#include <bits/stdc++.h>
#include <ostream>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);

            }
        }
    }
}
int main() {
  int arr[] = {7,11,9,2,17,4};
  int size = 6;
  
  bubbleSort(arr,6);
  for(int i=0;i<size;i++){
      cout<<arr[i]<<" " ;
  }
  cout<<endl;
  
}