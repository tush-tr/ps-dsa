#include<iostream>
using namespace std;
int getbit(int n, int i){
    int mask = 1<<i;
    return (n & mask);
}
int main(){
    cout<<getbit(5,1)<<endl;


    return 0;
}