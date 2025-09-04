#include <iostream>
using namespace std;

int main()
{
  int a = 5;
  int b = 6;

  cout << "Before swap a is : " << a << endl;
  cout << "Before swap b is : " << b << endl;

  // swap

  int c;

  c = a;
  a = b;
  b = c;

  cout << "after swap a is : " << a << endl;
  cout << "after swap b is : " << b << endl;

  return 0;
}