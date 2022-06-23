#include <iostream>
using namespace std;
int countsetbit(int n){
    int count = 0;
    while(n>0){
        count++;
        n = n & (n-1);
    }
    return count;
}
int main(){
    cout<<countsetbit(5)<<endl;
}