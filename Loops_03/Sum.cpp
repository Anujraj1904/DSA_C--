// Calculating the sum of number from 1 to n;

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter your number ";
  cin >> n;

  // using For Loops

  int sumUsingFor = 0;
  for (int i = 0; i <= n; i++)
  {
    sumUsingFor += i;
  }
  cout << "sum using for loops : " << sumUsingFor << endl;

  // using while loops

  int i = 1;
  int sumUsingWhile = 0;
  while (i <= n)
  {
    sumUsingWhile += i;
    i++;
  }
  cout << "Sum using while loop = " << sumUsingWhile << endl;
  return 0;
}
