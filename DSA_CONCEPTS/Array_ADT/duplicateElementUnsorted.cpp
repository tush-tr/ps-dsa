#include <bits/stdc++.h>
using namespace std; 

int main(){
    int A[10] = {6,3,8,20,15,12,15,8,15,10};
    for(int i=0;i<9;i++){
        int count = 1;
        for(int j=i+1;j<10;j++){
            if(A[j]==A[i] && A[j]!=-1){
                count++;
                A[j] = -1;
            }
        }
        if(count>1) cout<<"Number "<<A[i]<<" appearing "<<count<<" times."<<endl;
    }
}