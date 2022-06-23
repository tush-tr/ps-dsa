#include<iostream>
using namespace std;
int findone(int arr[],int n){
    int result = 0;
    for(int i=0;i<n;i++){
        result ^= arr[i];
    }
    return result;
}
int main(){
    int arr[] = {1,1,2,2,3,4,4};
    cout<<findone(arr,7)<<endl;
}