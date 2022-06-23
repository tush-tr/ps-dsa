#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int result=0;
    bool resultfound = false;
    int i=0;
    while(resultfound==false){
        if(i*i==n){
            result =i;
            resultfound=true;
        }
        i++;
    }
    cout<<"Square root of the number is: "<<result<<endl;
    return 0;
}