#include <iostream>
using namespace std;

int main() {
 
  int a =4, b=8;
 
  cout << "Bitwise AND: " << (a & b) << endl; // Output: 0
  // explanation of bitwise AND
  /*
  a = 4  (binary: 0100)
  b = 8  (binary: 1000)
  0&0 = 0
  0&1 = 0
  1&0 = 0
  1&1 = 1
  Bitwise AND: 
  0100 & 1000 = 0000 (decimal: 0)
  */

  cout << "Bitwise OR: " << (a | b) << endl; // Output: 12
  // explanation of bitwise OR
  /*
  a = 4  (binary: 0100)
  b = 8  (binary: 1000)
  0 | 0 = 0
  0 | 1 = 1
  1 | 0 = 1
  1 | 1 = 1
  Bitwise OR:
  0100 | 1000 = 1100 (decimal: 12)
  */
  cout << "Bitwise XOR: " << (a ^ b) << endl; // Output: 12
  // explanation of bitwise XOR
  /*
  a = 4  (binary: 0100)
  b = 8  (binary: 1000)
  0 ^ 0 = 0
  1 ^ 1 = 0
  0 ^ 1 = 1
  1 ^ 0 = 1
  Bitwise XOR:
  0100 ^ 1000 = 1100 (decimal: 12)
  */
  cout << "Bitwise NOT of a: " << (~a) << endl; // Output: -5
  // explanation of bitwise NOT
  /*
  a = 4  (binary: 0100)
  Bitwise NOT flips all bits:
  ~0100 = 1011 (in two's complement, this is -5)
  */
  cout << "Bitwise NOT of b: " << (~b) << endl; // Output: -9
  // explanation of bitwise NOT
  /*
  b = 8  (binary: 1000)
  Bitwise NOT flips all bits:
  ~1000 = 0111 (in two's complement, this is -9)
  */
  cout << "Left shift a by 1: " << (a << 1) << endl; // Output: 8
  // explanation of left shift
  // ---> left shift means (a * 2^n) here n is 1, where n is the number of positions shifted
  /*
  a = 4  (binary: 0100)
  Left shift by 1:
  0100 << 1 = 1000 (decimal: 8)
  */
  cout << "Right shift b by 1: " << (b >> 1) << endl; // Output: 4
  // explanation of right shift
  // ---> right shift means (a / 2^n) here n is 1, where n is the number of positions shifted

  /*
  b = 8  (binary: 1000)
  Right shift by 1:
  1000 >> 1 = 0100 (decimal: 4)
  */
  cout << "Left shift b by 2: " << (b << 2) << endl; // Output: 32
  // explanation of left shift
  /*
  b = 8  (binary: 1000)
  Left shift by 2:
  1000 << 2 = 100000 (decimal: 32)
  */
  cout << "Right shift a by 2: " << (a >> 2) << endl; // Output: 1
  // explanation of right shift
  /*
  a = 4  (binary: 0100)
  Right shift by 2:
  0100 >> 2 = 0001 (decimal: 1)
  */
  return 0;
}