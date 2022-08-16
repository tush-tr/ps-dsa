#include <bits/stdc++.h>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    Rectangle r = {10,5};
    cout<<r.length<<endl<<r.breadth<<endl;
    Rectangle *p = &r;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;

    // Dynamic Memory Allocation
    Rectangle *p1;
    p1 = new Rectangle;
    p1->breadth = 15;
    p1->length = 30;
    cout<<p1->breadth<<endl;
    cout<<p1->length<<endl;


}