#include <iostream>
using namespace std;
int main()
{
  int num;
  cout << "Enter your number : ";
  cin >> num;
  bool isPrime = true;

  // Time complexity for this is O(n);
  // because it is running for n times
  for (int i = 2; i <= num - 1; i++)
  {
    if (num % i == 0)
    {
      isPrime = false;
      break;
    }
  }

  if (isPrime == true)
  {
    cout << num << " is a prime number" << '\n';
  }
  else
  {
    cout << num << " is not a prime number" << '\n';
  }

  // Optimized
  // Time complexity for this is O(√n)
  // because it is running for √n  times

  for (int i =2; i*i <= num; i++){
    if (num % i == 0 ){
      isPrime = false;
      break;
    }
  }
  if (isPrime == true)
  {
    cout << num << " is a prime number" << '\n';
  }
  else
  {
    cout << num << " is not a prime number" << '\n';
  }
  return 0;

}