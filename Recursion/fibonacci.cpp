#include <iostream>
using namespace std;

// void printFibonacciUpTo(int n)
// {
//   int a = 0, b = 1;
//   cout << "Fibonacci series up to " << n << ":\n";
//   while (a <= n)
//   {
//     cout << a << " ";
//     int next = a + b;
//     a = b;
//     b = next;
//   }
//   cout << endl;
// }

void printFibonacciByIndex(int n)
{
  int a = 0, b = 1;
  cout << "Fibonacci series up to index " << n  << ":\n";
  for (int i = 0; i <= n; ++i)
  {
    cout << a << " ";
    int next = a + b;
    a = b;
    b = next;
  }
  cout << endl;
}

int fib(int n) {
  if(n==0 || n==1){
    return n;
  }
  return fib(n-1) + fib(n-2);
}


int main()
{
  int n;
  cout << "Enter a number till when you want to print Fibonacci: ";
  cin >> n;

  printFibonacciByIndex(n);
  cout << endl;
  cout << "Fibonacci number at position " << n << " is: " << fib(n) << endl;
  
  return 0;
}
