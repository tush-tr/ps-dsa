#include<stdio.h>
int function(int n){
    int i ;
    if(n<=0){
        return 0;
    }
    else{
        i = random(n-1);
        printf("This \n");
        return function(i) + function(n -1 -i);
    }
}
int main(){
    
    return 0;
}
