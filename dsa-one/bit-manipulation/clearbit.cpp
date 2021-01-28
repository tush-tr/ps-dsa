#include<iostream>
using namespace std;
int clearbit(int n, int pos)
{
    int mask = ~(1<<pos);
    n = n & mask;
    return n;
}
int main(){
    int n;
    cin>>n;
    int pos;
    cin>>pos;
    int clearedbit = clearbit(n,pos);
    cout<<clearedbit<<endl;
}