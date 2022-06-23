#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int arr[n] = {2,4,5,6,3};
    int mx = arr[0];
    for (int i = 0; i < n; i++)
    {
        mx = max(mx,arr[i]);
        cout<<mx<<endl;
        
    }
    cout<<"Maximum:- "<<mx<<endl;
    return 0;
}

// Time complexity== O(n);