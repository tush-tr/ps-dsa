#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n] = {2,4,5,2,3};
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            cout<<sum<<endl;
            

        }
        
    }
    

    return 0;
}