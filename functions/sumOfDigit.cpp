#include <iostream>
using namespace std;

int sumOfDigits(int num) {
  int digitSum =0; // Initialize sum of digits to 0

  while (num > 0) {
    int lastDigit = num % 10; // Get the last digit
    num = num / 10; // Remove the last digit
    digitSum += lastDigit; // Add the last digit to the sum
  }

  return digitSum;
}

int main() {
  int number;
  cout << "Enter a nummber: ";
  cin >> number;

  int result = sumOfDigits(number);
  cout << "Sum of digits of "<< number <<" : " << result << endl;
}