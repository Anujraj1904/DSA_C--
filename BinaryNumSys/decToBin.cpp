#include <iostream>
using namespace std;


int decToBin(int decNum ){
  int ans = 0;
  int power = 1;

  while (decNum > 0) {
    int remainder = decNum % 2;
    decNum /= 2;

    ans += remainder * power;
    power *= 10;
  }

  return ans;

}

int main() {
  int decNum = 50;

  // cout << "Decimal Number: " << decToBin(decNum) << endl;

  for (int i = 0; i<= decNum; i++) {
    cout << "Decimal: " << i << " Binary: " << decToBin(i) << endl;
  }
  return 0;
}