#include<iostream>
using namespace std;
int insertion(int arr[],int n,int element, int capacity,int index){
    if(n>=capacity){
        return -1;
    }
    for(int i=n-1;i>=index;--i){
        arr[i+1] = arr[i];
    }
    arr[index] =  element;
    return 1;
}

void deletion(int arr[], int n, int index){
    for(int i=index;i<n-1;i++){
        arr[i] = arr[i+1];
    }
}

int main(){
    int arr[20] = {1,2,3,4,5};
    int n = 5;
    int capacity = 20;
    int element = 56;
    int index = 2;
    insertion(arr,n,element,capacity,index);
    cout<<"After insertion 56 at index 2"<<endl;
    for(int i=0;i<7;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"After deleting 56 at index 2"<<endl;
    deletion(arr,n,index);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<endl;
    }
    


}