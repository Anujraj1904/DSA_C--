// Using foor loop print sum of even numbers from 1 to n

#include <iostream>
using namespace std;

int main(){
  int n , evenSum = 0;
  cout << "Enter a positive number: ";
  cin >> n;
  if (n < 1) {
    cout << "Please enter a positive number greater than 0." << endl;
    return 1;
  }

  for(int i = 1; i <= n; i++ ){
    if(i % 2 == 0){
      evenSum += i;
    }
  }
  cout << "Sum of even numbers from 1 to " << n << " is: " << evenSum << endl;
  return 0;
}

// Think of it like this: return 0 says "All good!" return 1 says "Uh-oh, something went wrong."