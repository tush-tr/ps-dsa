#include <iostream>
using namespace std;
bool checkprime(int n) {
  for (int i = 2; i*i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
int main() {
  int n;
  cout << "Enter n number: ";
  cin >> n;
  for (int i = 2; i <= n; i++) {
    if (checkprime(i)) {
      cout << i << endl;
    }
  }
}