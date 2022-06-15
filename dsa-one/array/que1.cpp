#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int majority_element(int a[], int n)
{
    // O(n^2)
    int me;
    int max = n/2;
    for (int i = 0; i < n; i++)
    {
        int el = a[i];
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == el)
            {
                count++;
            }
        }
        if (count >= max)
        {
            max = count;
            me = el;
        }
    }
    return me;
}
int second_optimized(int a[],int n){
    map<int,int> freq;
    
}
void print_array(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
int main()
{
    int a[5] = {5, 1, 4, 1, 1};
    int me = majority_element(a,5);
    // cout<<me<<endl;
    sort(a,a+5);
    print_array(a,5);
    
}