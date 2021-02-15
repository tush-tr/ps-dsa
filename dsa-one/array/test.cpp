#include <bits/stdc++.h>
#include <ostream>
using namespace std;
int main() {
  int arr[] = {7,11,9,2,17,4};
  int size = 6;
  for (int i = 0; i < size; i++) {
    if (arr[i] > arr[i + 1]) {
      swap(arr[i], arr[i + 1]);
      continue;
    }
  }
  cout<<arr[5]<<endl;
  
}