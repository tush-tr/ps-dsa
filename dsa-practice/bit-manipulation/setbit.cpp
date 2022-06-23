#include<iostream>
using namespace std;
int setbit(int n,int pos){
    int mask = 1<<pos;
    return n|mask;
}
int main(){
    cout<<setbit(5, 1)<<endl;


    return 0;
}