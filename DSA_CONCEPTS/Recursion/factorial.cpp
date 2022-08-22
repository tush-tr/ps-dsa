#include <bits/stdc++.h>
using namespace std; 

// Recursion
int factorial(int n){
    if(n==0){
        return 1;
    }
    return factorial(n-1)*n;
}

// Iteration
int fact(int n){
    int res = 1;
    for(int i=1;i<=n;i++){
        res *= i;
    }
    return res;
}

int main(){
    cout<<fact(5)<<endl;
    cout<<factorial(5)<<endl;


}