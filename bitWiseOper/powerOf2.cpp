// Question: Check if a number is a power of 2 without using loops 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

  // cout << "Right shift n by 1: " << (n >> 1) << endl;
  // n > 0 is to ensure we are checking only positive integers
  // n & (n - 1) checks if n is a power of 2 
  // 8 = 1000
  // n-1 = 8-1 = 7 => 0111
  // 1000 & 0111 = 0000 (which is 0)
  
  if (n > 0 && (n & (n - 1)) == 0) {
    cout << "The number is a power of 2." << endl;
  }
  else {
    cout << "The number is not a power of 2." << endl;
  }

  return 0;

}