#include <iostream>
using namespace std;
// Print Square Patteren
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

int main() {
  int n = 5;
  for (int i = 0; i<n; i++){
    cout << "* * * * *" << '\n';
  }

  // *****
  for (int i = 0; i < n; i++)
  {
    cout << "*";
  }
  return 0;
}