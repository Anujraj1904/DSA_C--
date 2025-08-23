#include <iostream>
using namespace std;

int main() {

  int n;
  cout << "Enter a number : ";
  cin >> n;

  int original = n;
  int reversed = 0;
  while (n > 0) {
    int digit = n % 10;
    reversed = reversed * 10 + digit;
    n /= 10;
  }
  cout << "Reverse number of " << original << " is " << reversed <<endl;
  return 0;
}