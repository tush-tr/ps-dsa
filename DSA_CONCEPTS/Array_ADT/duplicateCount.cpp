#include <bits/stdc++.h>
using namespace std; 

int main(){
    int A[10] = {3,6,8,8,10,12,15,15,15,20};
    for(int i=0;i<9;i++){
        if(A[i]==A[i+1]){
            int j=i+1;
            int count=1;
            while(A[j]==A[i]){
                count++;
                j++;
            }
            i = j-1;
            cout<<"Duplicate Number "<<A[i]<<" appearing "<<count<<" times."<<endl;
        }
    }

}