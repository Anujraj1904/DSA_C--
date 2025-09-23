#include <iostream>
using namespace std;

int main() {
  int n, sum =0;
  cout << "Enter a number: ";
  cin >> n;
  for (int i = 1; i <= n; i++){
    if (i % 3 == 0) {
    cout << i << " ";
    sum += i;
  }
  }
    cout << endl;
    cout << "Sum of multiples of 3 up to " << n << " is: " << sum << endl;

  return 0;
}