#include <iostream>
using namespace std;
int main()
{
    int A;
    cin >> A;
    int count = 0;
    while (A != 0)
    {
        int check = A & 1;
        cout << check << endl;
        if (check == 0)
        {
            count++;
        }
        else
        {
            break;
        }
        A = A >> 1;
    }
    cout << count << endl;
}