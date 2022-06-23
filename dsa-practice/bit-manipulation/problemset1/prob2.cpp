#include <iostream>
using namespace std;
bool checkpow(int n){
    int count = 0;
    while(n>0){
        count++;
        n = n & (n-1);
    }
    if(count==1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(checkpow(i)){
            cout<<i<<endl;
        }
    }
    
    cout<<endl;

}