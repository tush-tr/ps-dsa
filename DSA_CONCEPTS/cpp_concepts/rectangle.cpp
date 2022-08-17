#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    void changeLength(int l)
    {
        length = l;
    }
};

int main()
{
    Rectangle r(20, 5);
    cout << r.area() << endl;
    r.changeLength(50);
    cout << r.area() << endl;
}