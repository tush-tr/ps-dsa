#include <iostream>
using namespace std;
int getbit(int n, int pos) { return ((n & (1 << pos)) != 0); }
int main() {
  for (int i = 1; i <= 6; i++) {

    cout << getbit(5, i) << endl;
  }

  return 0;
}