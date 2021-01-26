#include<iostream>
using namespace std;
int setbit(int n, int i){
    int mask = 1<<i;
    n = n|mask;
    return n;
}
int main(){

    cout<<setbit(5,1)<<endl;

    return 0;
}