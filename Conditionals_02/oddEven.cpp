// Finding out if a number is ODD or EVEN

#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter a number : ";
  cin >> num;

  if (num % 2 == 0) {
    cout << num <<  " is a Even number" << "\n";
  }else {
    cout << num << " is a Odd number" << "\n";
  }
  return 0;
}