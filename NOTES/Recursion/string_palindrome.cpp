#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int l, int h)
{
    if (l < h)
    {
        if (str[l] != str[h])
        {
            return false;
        }
        return isPalindrome(str, l + 1, h - 1);
    }
    return true;
}

int main()
{
    string str = "aba";
    cout<<isPalindrome(str,0,str.length()-1)<<endl;
}