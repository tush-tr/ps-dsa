#include<iostream>
using namespace std;
int findxor(int arr[], int n){
    int res = 0;
    for(int i=0;i<n;i++){
        res ^= arr[i];
    }
    return res;
}
int filterxor(int arr[], int n, int rightmostbit){
    int res = 0;
    for(int i=0;i<n;i++){
        if(arr[i]&rightmostbit){
            res ^= arr[i];
        }
    }
    return res;
}
int main(){
    int arr[] = {1,1,2,2,3,4,5,5}; //8
    int xorOfElements = findxor(arr,8);
    int rightmostbit = xorOfElements & ~(xorOfElements-1);
    int filteredxor = filterxor(arr,8,rightmostbit);
    int result1 = xorOfElements^filteredxor;
    int result2 = result1^xorOfElements;
    cout<<result1<<endl<<result2<<endl;
}