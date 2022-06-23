#include<iostream>
using namespace std;
int sqrt(int n){
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
    return result;
}
int main(){
    int n;
    cin>>n;
    bool flag=0;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            cout<<"Not a prime number";
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Prime number";
    }
    cout<<endl;
    return 0;
}