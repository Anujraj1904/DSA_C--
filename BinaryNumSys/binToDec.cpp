#include <iostream>
using namespace std;

int BinToDec(int binNum) {
  int ans = 0;
  int power = 1;

  while(binNum > 0) {

    int remainder = binNum % 10;
    ans += remainder * power;

    binNum /= 10;
    power *= 2;

  }

  return ans;
}


int main () {

  int binNum;
  cout << "Enter a binary number: ";
  cin >> binNum;  

  cout << "Decimal equivalent: " << BinToDec(binNum) << endl;
  return 0;
}