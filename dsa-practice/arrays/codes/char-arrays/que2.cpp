#include <iostream>
using namespace std;
int main()
{
    // Largest word in a sentence
    int n;
    cin >> n;
    cin.ignore();

    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();

    int mx = 0;
    int curr = 0;
    int i = 0;
    while (i<n)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (curr > mx)
            {
                mx = curr;
            }
            curr = 0;
        }
        else
        {
            curr++;
        }
        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout << mx << endl;

    return 0;
}