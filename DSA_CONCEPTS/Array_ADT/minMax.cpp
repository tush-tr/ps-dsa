#include <bits/stdc++.h>
using namespace std; 

int main(){
    int A[10] = {1,2,3,4,5,68,67,23,12,15};
    int minN = INT_MAX;
    int maxN = INT_MIN;
    for(int i=0;i<10;i++){
        minN = min(minN,A[i]);
        maxN = max(maxN,A[i]);
    }
    cout<<maxN<<endl;
    cout<<minN<<endl;

}