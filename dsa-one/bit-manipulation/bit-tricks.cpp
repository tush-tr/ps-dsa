#include <bits/stdc++.h>
using namespace std;
class bittricks {
public:
int clearlsb(int n,int i){
    int mask = ~((1<<(i+1))-1);
    return n & mask;
}
int clearmsb(int n,int i){
    int mask = (1<<i)-1;
    return n&mask;
}
char toLowerCase(char ch){
    ch |= ' ';
    return ch;
}
char toUpperCase(char ch){
    ch &= '_';
    return ch;
}
int log2(int n){
    int res = 0;
    while(n>>=1){
        res++;
    }
    return res;
}

int isPowerof2(int n){
    return (n && !(n & n-1));
}


};
int main() {
    bittricks magic;
    char t = 'T';
    cout<<magic.toLowerCase(t)<<endl;

    
}