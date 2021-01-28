#include<iostream>
using namespace std;
int main(){
    int a[8] ={5,4,1,4,3,5,1,2};
    // TODO: Get the XOR of all of elements in the array
    int res = 0;
    for(int i=0;i<=7;i++){
        res = res^a[i];
    }
    cout<<"XOR of array: "<<res<<endl;
    // TODO: get the right most set bit in the res
    int rightmost = res & ~(res-1);

    cout<<"Rightmost bit in array: "<<rightmost<<endl;

    // TODO: devide array elements comparing rightmost set bit of res with bit 
    // at same position in each element.
    int x = 0;
    for(int i=0;i<7;i++){
        if(a[i]&rightmost){
            x = x^a[i];
        }

    }
    cout<<"XOR of first set: "<<x<<endl;
    cout<<"______Results_________"<<endl;
    int result1 = res^x;
    int result2 = res^result1;
    cout<<result1<<endl<<result2<<endl;

}