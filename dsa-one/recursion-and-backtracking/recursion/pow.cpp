#include<iostream>
using namespace std;
int pow(int a,int b){
    if(b==1){
        return a;
    }
    else if(b==0){
        return 1;
    }
    return a * pow(a,b-1);

}
int main(){
    cout<<pow(2,3)<<endl;
    cout<<pow(3,0)<<endl;
    cout<<pow(4,1)<<endl;
}