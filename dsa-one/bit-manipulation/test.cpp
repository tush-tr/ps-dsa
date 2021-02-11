#include<iostream>
using namespace std;
int main(){
    string n = "Tushar$";
    int i=0;
    while(n[i] != '\0'){
        if(n[i]=='$'){
            break;
        }
        cout<<n[i];
        i++;
    }
}