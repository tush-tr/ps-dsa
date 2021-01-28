// TODO: Find number of bits to change to convert a to b.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    // TODO: Check how many bits are different using XOR operator
    int n = a ^ b;
    // TODO: Find how many set bits are there in a binary number n
    // Approach: clear least set bit till it becomes zero using -- n & (n-1)
    int count = 0;
    while(n!=0){
        count++;
        n = n & (n-1);
    }
    cout<<count<<endl;
}