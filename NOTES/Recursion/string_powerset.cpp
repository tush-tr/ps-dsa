#include <bits/stdc++.h>
using namespace std;

void powerset(string s, int i, string curr)
{
    if (i == s.length())
    {
        cout << curr << endl;
        return;
    }
    powerset(s, i + 1, curr + s[i]);
    powerset(s, i + 1, curr);
}

int main()
{
    powerset("ab", 0, "");
}
