#include <iostream>
using namespace std;

bool isPrime(int num){
  if (num <= 1) return false; // 0 and 1 are not prime numbers
  for (int i = 2; i*i <= num; i++) { // Check divisibility from 2 to sqrt(num)
    if (num % i == 0) { // If num is divisible by any number other than 1 and itself
      return false; // num is not prime
    }
  }
  return true;  // num is prime
}

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  cout << "Prime number from 2 to " << n << " are: ";
  for (int j=2; j<=n; j++){ // Loop from 2 to n
    if (isPrime(j)){ // Check if j is prime
      cout << j << " "; 
    }
  }
  cout << endl;
  return 0;
}