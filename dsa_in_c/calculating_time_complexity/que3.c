#include<stdio.h>
#include<stdlib.h>
int randomof(int a){
    int i;
    int num = (rand()%(a+1));
    return num;
}
int function(int n){
    int i ;
    if(n<=0){
        return 0;
    }
    else{
        i = randomof(n-1);
        printf("This \n");
        return function(i) + function(n -1 -i);
    }
}
int main(){
    function(6);
    return 0;
}
