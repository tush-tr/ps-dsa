#include <bits/stdc++.h>
using namespace std; 
void fun(int x){
    if(x>0){
        cout<<x<<endl;
        fun(x-1);
    }
}

void fun2(int x){
    if(x>0){
        fun2(x-1);
        cout<<x<<endl;
    }
}
int main(){
    // fun(10);
    int x= 3;
    fun(x);

}