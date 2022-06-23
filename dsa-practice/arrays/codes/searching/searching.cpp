#include<bits/stdc++.h> 
using namespace std;
void search(int arr[],int n,int find){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==find){
            cout<<i;
            break;
        }
    }
}
int linearsearch(int arr[], int n, int find){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==find)
        {
            return i;
        }  
    }
    return -1;  
}

int binarysearch(int arr[], int n, int find){
    // first we have to sort elements in the array
    int s=0;
    int e=n;
    while (s<=e)
    {
        int mid = (s+e)/2;

        if(arr[mid]==find){
            return mid;
        }
        else if(arr[mid]>find){
            e = mid-1;
        }
        else{
            s = mid+1;
        }

    }
    return -1;
}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int find;
    cin>>find;
    cout<<linearsearch(arr,n,find);
    cout<<binarysearch(arr,n,find);

    return 0;
}