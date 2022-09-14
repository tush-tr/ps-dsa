#include <bits/stdc++.h>
using namespace std; 

int main(){
    int A[11] = {6,7,8,9,10,12,13,14,15,16,17};
    int diff = A[0]-0;
    for(int i=0;i<11;i++){
        if(A[i]-i != diff){
            cout<<i+diff<<endl;
            break;
        }
    }
}