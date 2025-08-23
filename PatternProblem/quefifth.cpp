// This code prints a pattern of numbers based on the value of n.
// For n = 5, the output will be
// 1
// 22
// 333
// 4444
// 55555

#include <iostream>
using namespace std;

int main () {

  int n = 4; 
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j < i +1; j++) {
      cout << i;
    }
    cout << endl;
  }

  return 0;
}