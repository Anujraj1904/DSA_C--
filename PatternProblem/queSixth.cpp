#include <iostream>
using namespace std;

int main () {

  int n = 5;
  char ch = 'A';

  for (int i = 1;  i <= n; i++) {
    for (int j = 1; j < i+1; j++){
      cout << ch;
      // ch++;  // A BC DEF GHIJ KLMNO
    }
    cout << endl;
    ch++;  // A BB CCC DDDD EEEEE
  }
  return 0;
}