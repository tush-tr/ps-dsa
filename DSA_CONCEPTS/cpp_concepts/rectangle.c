#include<stdio.h>
struct Rectangle{
    int length;
    int breadth;
};
void initialize(struct Rectangle *r,int length, int breadth){
    r->breadth = breadth;
    r->length = length;
}
int area(struct Rectangle r){
    return r.length*r.breadth;
}
void changeLength(struct Rectangle *r, int l){
    r->length = l;
}

int main(){
    struct Rectangle r;
    initialize(&r,10,5);
    printf("%d %d\n",r.length,r.breadth);
    int ar = area(r);
    printf("%d \n",ar);
    changeLength(&r,20);
    printf("%d %d\n",r.length,r.breadth);



}