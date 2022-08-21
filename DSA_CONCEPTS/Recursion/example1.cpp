#include <bits/stdc++.h>
using namespace std; 

// tail recursion
void fun(int x){
    if(x>0){
        cout<<x<<endl;
        fun(x-1);
    }
}

// head recursion
void fun2(int x){
    if(x>0){
        fun2(x-1);
        cout<<x<<endl;
    }
}
void fun3(int x){
    int i=1;
    while(i<=x){
        cout<<i<<endl;
        i++;
    }
}

int main(){
    // fun(10);
    int x= 3;
    fun2(x);
    fun3(x);

}