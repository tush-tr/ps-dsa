#include<bits/stdc++.h>
#include <shared_mutex>
using namespace std;
// TODO: Insertion and Deletion
class Operations{
    public:
    void display(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    // Insertion into array
    int insertion(int arr[],int size, int element, int capacity, int index){
        if(size>=capacity){
            return -1;
        }
        for(int i=size-1;i>=index;i--){
            arr[i+1] = arr[i];
        }
        arr[index] = element;
        return 1;
    }
    // Deletion on a specific index 
    void deletion(int arr[],int size, int index){
        for(int i=index;i<size-1;i++){
            arr[i] = arr[i+1];
        }
    }
};


// TODO: Linear Search and Binary Search
class Searching{
    public:
    // Linear search - O(N)
    int linearSearch(int arr[],int size,int element){
        for(int i=0;i<size;i++){
            if(arr[i]==element){
                return i;
            }
        }
        return -1;
    }
    // Binary Searching - O(log n)
    int binarySearch(int arr[],int size,int element){
        int low = 0;
        int high = size;
        while(low<=high){
            int mid = (high+low)/2;
            if(arr[mid]==element){
                return mid;
            }
            else if(arr[mid]>element){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return -1;
        
    }
};

// TODO: Bubble Sort, Selection Sort, Insertion Sort
class Sorting{
    public:
    // Bubble Sort
    void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);

            }
        }
    }
}

};
int main(){
    Searching search;
    Operations oper;
    Sorting sortArray;
    int arr[] = {1,2,3,4,5,7,8};
    int A[] = {7,11,9,2,17,4};
    int An = 6;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Inserted or not?_______"<<endl;
    cout<<oper.insertion(arr,size,6, 8, 5)<<endl;
    cout<<"After inserting 6 at index 5 : "<<endl;
    cout<<arr[5]<<endl;
    cout<<"___________________________"<<endl;
    // search 5--
    cout<<"__________Linear Search_________"<<endl;
    cout<<"Index of 5 is: "<<search.linearSearch(arr,size,5)<<endl;
    cout<<"__________Binary Search_________"<<endl;
    cout<<"Index of 5 is: "<<search.binarySearch(arr,size,5)<<endl;

    // _____Sorting_______
    cout<<"_________Before Bubble Sort_______"<<endl;
    oper.display(A,An);
    cout<<"_________After Bubble Sort________"<<endl;
    sortArray.bubbleSort(A,An);
    oper.display(A,An);


}