#include <iostream>
using namespace std;

// Function to calculate nCr binomial coefficient for given n and r
int factorial(int n) {
  int fact  = 1;
  for (int i = 1; i <= n; i++)
  {
    fact *= i;
  }
  return fact;
}


int nCr(int n, int r)
{
  // int factOfn = 1;
  // int factOfr = 1;
  // int factOfnSUBr = 1;


  // for (int i = 1; i <= n; i++)
  // {
  //   factOfn *= i;
  // }

  // for (int j = 1; j <= r; j++)
  // {
  //   factOfr *= j;
  // }

  // for (int k = 1; k <= (n - r); k++)
  // {
  //   factOfnSUBr *= k;
  // }

  int factOfn = factorial(n);
  int factOfr = factorial(r);
  int factOfnSUBr = factorial(n-r);

  int result = (factOfn) / (factOfr * factOfnSUBr);
  return result;
}

int main() {
  int n , r;
  cout << "Enter n: ";
  cin >> n;
  cout << "Enter r: ";
  cin >> r;

  cout << "nCr binomial coefficient for " << n << " & " << r << " is " << nCr(n, r) << endl;
  
  return 0;

}