#include <iostream>
using namespace std;
// Calculating the sum N number using For Loops.
int sumOfN_UsingForLoop(int n) {
  int sum =0;
  for(int i =0; i<=n; i++){
    sum += i;
  }
  return sum;
}

// Calculating the sum N number using For Recursion.
int sumOfN_UsingResursion(int n) {
  	if (n == 1) return 1;
    return n + sumOfN_UsingResursion(n - 1);
}

int main()
{
  int n;
  cout << "Enter the number : ";
  cin >> n;

  int resultUsingLoop = sumOfN_UsingForLoop(n);
  int resultUsingRec = sumOfN_UsingResursion(n);

  cout << "Sum of " << n << " number using for Loop is " << resultUsingLoop << "\n";
  cout << "Sum of " << n << " number using Recursion is  " << resultUsingRec << "\n";

  return 0;
}