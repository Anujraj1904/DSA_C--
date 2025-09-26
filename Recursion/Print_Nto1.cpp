#include <iostream>
using namespace std;

void PrintNums (int n) {
  if (n == 1) {cout << "1\n"; return;}

  cout << n << " ";
  PrintNums(n-1);


}

int main(){
  int n;
  cout << "Enter your number : ";
  cin >> n;

  PrintNums(n);

  return 0;
}