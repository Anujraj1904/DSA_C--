#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the limit for Fibonacci series: ";
  cin >> n;

  int a = 0, b = 1;

  cout << "Fibonacci series up to " << n << " is:" << endl;

  while (a <= n)
  {
    cout << a << " ";
    int next = a + b;
    a = b;
    b = next;
  }

  cout << endl;
  return 0;
}
