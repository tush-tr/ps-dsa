// TODO: Find number of bits to change to convert a to b.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    // TODO: Check how many bits are different using XOR operator
    int n = a ^ b;
    // TODO: Find how many set bits are there in a binary number n
    // Approach: right shift the number till it becomes zero
    int count = 0;
    while(n!=0){
        int check = n & 1;
        if(check ==1){
            count++;
        }
        n = n>>1;
    }
    // _______________ Time Complexity of this approach - log n
    cout<<count<<endl;
}