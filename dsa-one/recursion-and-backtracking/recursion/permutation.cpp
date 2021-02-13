#include<bits/stdc++.h>
using namespace std;
void permut(string s, int l, int r){
    if(l==r){
        cout<<s<<endl;
    }
    for(int i=l;i<=r;i++){
        swap(s[l],s[i]);
        permut(s,l+1,r);
        swap(s[l],s[i]);
    }
}
int main(){
    permut("abc",0,2);

}