#include <bits/stdc++.h>
using namespace std;

// without static variable
int fun1(int n)
{
    if (n > 0)
    {
        return fun1(n - 1) + n;
    }
    return 0;
}

// with static variable
int fun2(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return fun2(n - 1) + x;
    }
    return 0;
}

int main()
{
    cout << fun1(5) << endl;
    cout << fun2(5) << endl;
}