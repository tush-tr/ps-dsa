#include <bits/stdc++.h>
using namespace std; 

int main(){
    int k = 10;
    int A[10] = {1,2,3,4,5,6,7,8,11,14};
    int i=0,j=9;
    while(i<j){
        if(A[i]+A[j]==k){
            cout<<A[i]<<" + "<<A[j]<<" = "<<k<<endl;
            i++;
            j--;
        }
        else if(A[i]+A[j]<k){
            i++;
        }
        else{
            j--;
        }
    }


}