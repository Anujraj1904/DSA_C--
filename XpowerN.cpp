#include <iostream>
using namespace std;

//  calculate pow(x,n) which calaculate X and raised to  the power n;
int main() {

  // Brute force method to calculate power
  int x,n;
  cout << "Enter x : ";
  cin >> x;
  cout << "Enter n : ";
  cin >> n;

  int result = 1;
  for (int i = 0; i <n; i++) {
    result *= x;
  }
  cout << "Result of " << x << " raised to the power " << n << " is: " << result << endl;

  return 0;
}