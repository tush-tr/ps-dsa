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
bool ispowerof2(int n){
    return (n && !(n & n-1));
}
int main(){
    int n;
    cin>>n;
    int bits = countsetbit(n);
    cout<<"With Count set bit Method: "<<endl;
    if(bits==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    cout<<endl<<"With n & (n-1) = 0  method: "<<endl;
    cout<<ispowerof2(n)<<endl;

    cout<<endl;

}