#include <iostream>
using namespace std;

int main()
{
  int a = 10;
  int b = 3;

  // Arithmetic Plus(+), Minus(-), Multiply(*), Divison(/), Modulo(%)
  // Addition (+)
  int sum = a + b;
  cout << "Addition (a + b): " << sum << '\n'; // Output: 13

  // Subtraction (-)
  int diff = a - b;
  cout << "Subtraction (a - b): " << diff << '\n'; // Output: 7

  // Multiplication (*)
  int product = a * b;
  cout << "Multiplication (a * b): " << product << '\n'; // Output: 30

  // Division (/)
  int quotient = a / b;
  cout << "Division (a / b): " << quotient << '\n'; // Output: 3

  // int/int=int
  // int/float=float
  // int/double=double
  // float/int=float
  // double/int=double

  // Modulo (%)
  int remainder = a % b;
  cout << "Modulo (a % b): " << remainder << '\n'; // Output: 1

  // Relational operator < , > , <= , >=, Equal(==), NotEqualTo(!=)

  // Less than (<)
  cout << "a < b: " << (a < b) << '\n'; // Output: 1 (true)

  // Greater than (>)
  cout << "a > b: " << (a > b) << '\n'; // Output: 0 (false)

  // Less than or equal to (<=)
  cout << "a <= b: " << (a <= b) << '\n'; // Output: 1 (true)

  // Greater than or equal to (>=)
  cout << "a >= b: " << (a >= b) << '\n'; // Output: 0 (false)

  // Equal to (==)
  cout << "a == b: " << (a == b) << '\n'; // Output: 0 (false)

  // Not equal to (!=)
  cout << "a != b: " << (a != b) << '\n'; // Output: 1 (true)

  // Logical operators OR(||), AND(&&), NOT(!)

  bool c = true;
  bool d = false;

  // Logical AND (&&)
  cout << "c && d: " << (c && d) << '\n'; // Output: 0 (false)

  // Logical OR (||)
  cout << "c || d: " << (c || d) << '\n'; // Output: 1 (true)

  // Logical NOT (!)
  cout << "!c: " << (!c) << '\n'; // Output: 0 (false)
  cout << "!d: " << (!d) << '\n'; // Output: 1 (true)

  return 0;
}
