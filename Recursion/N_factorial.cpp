#include <iostream>
using namespace std;

// Using For Loops
int Factorial(int n)
{
  int factorial = 1;
  for (int i = 1; i <= n; i++)
  {
    factorial *= i;
  }

  return factorial;
}

// Using Recursion
int FactorialUsingRec(int n)
{
  if (n == 1)
    return 1;
  return n * FactorialUsingRec(n - 1);
}

int main()
{
  int n;
  cout << "Enter your number to calculate Factorial : ";
  cin >> n;

  int resultUsingForLoop = Factorial(n);
  int resultUsingRec = FactorialUsingRec(n);

  cout << "Factorial of " << n << " using For Loop is " << resultUsingForLoop << "\n";
  cout << "Factorial of " << n << " using Recursion is " << resultUsingRec;

  return 0;
}