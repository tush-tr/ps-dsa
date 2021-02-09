#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n =10;
    // scanf("%d",&n);
    ptr = (int *)malloc(n* sizeof(int));
    for(int i=0;i<n;i++){
        ptr[i] = 10*(i+1);
        printf("10 x %d = %d\n",i+1,ptr[i]);
    }
    
    return 0;
}