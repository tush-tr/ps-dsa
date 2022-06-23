/* 
Arrays Challenge-Record Breaker

(Google kickstart)

Problem
Isyana is given the number of visitors at her local theme park on N consecutive
days. The number of visitors on the i-th day is Vi. A day is record breaking if it
satisfies both of the following conditions:

● The number of visitors on the day is strictly larger than the number of
visitors on each of the previous days.
● Either it is the last day, or the number of visitors on the day is strictly larger
than the number of visitors on the following day.
Note that the very first day could be a record breaking day!
Please help Isyana find out the number of record breaking days.

Input
The first line of the input gives the number of test cases, T. T test cases follow.
Each test case begins with a line containing the integer N. The second line
contains N integers. The i-th integer is Vi.

Output
For each test case, output one line containing Case #x: y, where x is the test case
number (starting from 1) and y is the number of record breaking days.


*/

#include<bits/stdc++.h>
using namespace std;
// Brute force O(n^2)
int recordcount(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;i++){
        int a;
        for(int j=0;j<i;j++){
            if(arr[i]<arr[j]){
                a = -1;
                break;
            }
            a=1;
        }
        if(a>0 && arr[i]>arr[i+1]){
            count++;
        }
    }
    return count;
}
// optimised Approach- O(n)
int records(int arr[],int n){
    int res = 0;
    int mx = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){
            res++;
        }
        mx = max(mx,arr[i]);
    }
    return res;
}
int main(){
    int n = 8;
    int arr[n+1] = {1,2,0,7,2,0,2,2,-1};
    cout<<recordcount(arr,8)<<endl;
    cout<<"________Optimised Approach_________"<<endl;
    cout<<records(arr,8)<<endl;
}