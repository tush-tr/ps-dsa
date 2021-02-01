#include<iostream>
using namespace std;
int getbit(int n, int pos){
    return ((n & (1<<pos))!=0);
}
int setbit(int n,int pos){
    n = n | (1<<pos);
    return n;
}
int clearbit(int n, int pos){
    return n & (~(1<<pos));
}
int countsetbits(int n){
    // n & (n-1) will clear rightmost set bit
    int result = 0;
    while(n>0){
        result++;
        n = n& (n-1);
    }
    return result;
}
int findNonRepeatingElement(int arr[],int length){
    int result = 0;
    for(int i=0;i<length;i++){
        result = result ^ arr[i];
    }
    return result;
}

int main(){
    cout<<getbit(5,1)<<endl; // 5 - 101 - output - 0
    cout<<setbit(5,1)<<endl; // 5 - 101 after setbit - 111 output - 7
    cout<<clearbit(7,1)<<endl; // 7 - 111 after clear bit - 101 output - 5
    cout<<countsetbits(5)<<endl; // 5 - 101 output - 2
    int arr[7] = {5,4,1,4,3,5,1};
    cout<<findNonRepeatingElement(arr,7)<<endl; // output - 3
}