#include <iostream>
using namespace std;

int main() {
  int n;
  int factor = 1;
  cout << "Enter a positive integer: ";
  cin >> n;

  if (n <= 0) {
    cout << "Please enter a positive integer." << endl;
    return 1;
  }
  cout << "Factors of " << n << " are: ";
  for (int i = 1; i <= n; i++) {
    factor = factor * i;
  }
  cout << factor << endl;
  return 0;

}