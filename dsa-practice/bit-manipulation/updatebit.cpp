#include <iostream>
using namespace std;
int updateBit(int n,int pos,int value){
    int clear = n & ~(1<<pos);
    int set = clear | (value<<pos);
    return set;
}
int main(){
    cout<<updateBit(5,1,1);
    
}