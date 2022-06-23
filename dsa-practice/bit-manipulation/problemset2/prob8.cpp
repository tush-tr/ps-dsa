#include <iostream>
using namespace std;
int getbit(int n, int i)
{
    int mask = 1 << i;
    return ((n & mask) != 0);
}
int main()
{
    int a[] = {2, 2, 1, 5, 1, 1, 2};
    int INT_SIZE = 8 * sizeof(unsigned int); 
    // TODO: Initialize an count array of 32 bits
    int allsum[INT_SIZE];
    for (int pos = 0; pos < INT_SIZE; pos++)
    {
        int count = 0;
        for (int i = 0; i < 7; i++)
        {
            // TODO: Get bit on every position
            count += getbit(a[i], pos);
        }
        // TODO: Add bit counts in the array
        allsum[pos] = count;
    }

    // Now we have the array of bit counts for every element
    // for (int i = 0; i < 32; i++)
    // {
    //     cout << allsum[i] << endl;
    // }
    
    unsigned res = 0; 
    int k = 3;
    for (int i = 0; i < INT_SIZE; i++) 
        res += (allsum[i] % k) * (1 << i); 
    cout<<"_________Result________"<<endl<<res<<endl;
}