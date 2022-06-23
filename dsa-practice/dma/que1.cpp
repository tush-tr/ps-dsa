#include<iostream>
using namespace std;

int main() {
   int rows = 3, cols = 4;
   int** arr = new int*[rows];
   for(int i = 0; i < rows; ++i){

   arr[i] = new int[cols];
   }
   return 0;
}