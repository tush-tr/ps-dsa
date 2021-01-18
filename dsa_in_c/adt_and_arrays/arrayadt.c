#include<stdio.h>
#include<stdlib.h>
// Creating an array adt using structures 
struct myArray{
    int total_size; // how much size the array has- memory to be reserved
    int used_size;  // how much size is used
    int *ptr; //base address
};

void createArray(struct myArray *a,int tSize, int uSize){
    (*a).total_size = tSize;
    (*a).used_size = uSize;
    (*a).ptr = (int *) malloc(tSize * sizeof(int));
}


int main(){
    struct myArray marks;
    createArray(&marks,100,20);
    
    return 0;
}