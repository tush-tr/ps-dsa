#include<iostream>
using namespace std;
int main(){
    // whenever we right shift any integer using right shift operator one time, we devide it by 2
    int n=5;
    while (n>0)
    {
        cout<< n <<endl;
        n = n>>1; // we are using right shift operator without using n /= 2.
    }
    

    return 0;
}