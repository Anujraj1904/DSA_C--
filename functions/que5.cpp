#include <iostream>
using namespace std;

// write a function to check if a number is prime or not
string primeOrNot(int n) {

  if (n <= 1) return " is not a prime number";

  bool isPrime = true;

  for (int i= 2; i*i <= n; i++){
    if (n % i == 0 ){
      isPrime = false;
      break;
    }
  }

  if (isPrime == true){
    return ( " is prime number") ;
  }
  else {
    return (" is not a prime number");
  }
}

int main () {
  int n;
  cout << "Enter your nummber = ";
  cin >> n;

  cout << n << primeOrNot(n) <<endl;


  return 0;
}