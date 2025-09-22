// the process of converting one data type into another. It’s like telling the compiler: “Treat this value as if it were a different type.” This is especially useful when you're working with mixed types (like integers and floats) or need to force a conversion for compatibility or precision.

// Casting can lead to data loss (e.g., float to int).

// Misuse of reinterpret_cast or const_cast can cause undefined behavior.

// Always prefer static_cast for clarity and safety in regular conversions.

// Common Casts in C++
// static_cast --> Basic conversions(int to float, etc.)
// dynamic_cast --> Safe downcasting in inheritance
// const_cast --> Remove const or volatile qualifier
// reinterpret_cast --> Low - level bit reinterpretation

#include <iostream>
           using namespace std;
int main()
{

  int a = 5;
  cout << a << '\n';
  float b = a; // int automatically converted to float
  cout << b << '\n';

  float pi = 3.14;
  cout << pi << '\n';
  int x = (int)pi; // x becomes 3
  cout << x << '\n';

  // float pi = 3.14;
  // int x = static_cast<int>(pi);
  // safer and more readable
  cout << x << '\n';

  return 0;
}