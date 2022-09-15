#include <bits/stdc++.h>
using namespace std; 

int main(){
    int A[10] = {3,6,8,8,10,12,15,15,15,20};
    int lD = 0;
    for(int i=0;i<10;i++){
        if(A[i]==A[i+1] && A[i]!= lD){
            cout<<"Duplicate Number: "<<A[i]<<endl;
            lD = A[i];
        }
    }


}