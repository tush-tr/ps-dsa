#include<iostream>
using namespace std;
int main(){
    int n = 6;
    int mask = 1;
    int temp;
    int i=1;
    while(i<=8){
        temp = n & mask;
        mask = mask<<i;
        i++;
        if(temp == 1){
            cout<<i<<endl;
            continue;
        }
        
    }

    return 0;
}