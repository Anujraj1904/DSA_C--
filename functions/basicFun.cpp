#include <iostream>
using namespace std;

void printHello () {
  cout << "Hello, World!\n"; 
}

int Hello()
{
  cout << "Hello, World!\n";
  return 3;
}

// sum of 2 num
int sum (int a, int b) {
  return a + b;
}

double sum(double a, double b) {
  return a + b;
}
 int minOfTwo(int a, int b) {
  return (a < b) ? a : b;
 }

 double minOfTwoDoub(double a, double b)
 {
   return (a < b) ? a : b;
 }

int main() {
  // printHello();
  int result = Hello();
  // cout << "Result from Hello function: " << result << endl;
  cout << "Sum of 5 and 10 is: " << sum(5, 10) << endl;
  cout << "Sum of 5.8 and 10.08 is: " << sum(5.8, 10.08) << endl;

  cout << "Minimum of 5 and 10 is: " << minOfTwo(5, 10) << endl;
  cout << "Minimum of 5.8 and 10.08 is: " << minOfTwoDoub(5.8, 10.08) << endl;
  return 0; 
}