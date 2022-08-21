#include <bits/stdc++.h>
using namespace std; 

int fun(int n){
    if(n>100){
        return n-10;
    }
    return fun(fun(n+11));
}

int main(){
    cout<<fun(95)<<endl;
    cout<<fun(100)<<endl;
    cout<<fun(200)<<endl;


}