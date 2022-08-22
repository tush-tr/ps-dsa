#include <bits/stdc++.h>
using namespace std; 

// Iteration
int sum(int n){
    int s = 0;
    for(int i=1;i<=n;i++){
        s+=i;
    }
    return s;
}

// Recursion
int sumR(int n){
    if(n==0){
        return 0;
    }
    return sumR(n-1)+n;
}

// MATHS
int sumM(int n){
    return (n*(n+1))/2;
}

int main(){
    cout<<sum(5)<<endl;
    cout<<sumR(5)<<endl;
    cout<<sumM(5)<<endl;


}