#include <bits/stdc++.h>
using namespace std; 
void perm(string &s,int k){
    int A[10] = {0};
    string res(10);
    int i;
    if(k==s.length() && k==res.length()){
        cout<<res<<endl;
    }else{
        for(i=0;i<s.length();i++){
            if(A[i]==0){
                res[k] = s[i];
                A[i] = 1;
                perm(s,k+1);
                A[i] = 0;
            }
        }
    }
}
int main(){
    string s = "abc";
    perm(s,0);

}