// square pattern for n = 4
// ABCD
// ABCD
// ABCD
// ABCD

#include <iostream>
using namespace std;

int main()
{
  int n = 4;
  char ch = 'A';
  // outer loop to control the number of lines
  for (int i = 1; i <= n; i++)
  {
    // inner loop to print characters in each line
    // char ch = 'A';
    for (int j = 1; j <= n; j++)
    {
      // char ch = 'A';  // AAAA  AAAA AAAA AAAA
      cout << ch;
      // ch++;   // ABCD ABCD ABCD ABCD --> when ch is inside the outer loop
      ch++;   // ABCD EFGH IJKL MNOP --> when ch is outside the outer loop
    }
    cout << endl;
    // increment character for the next line
    // ch++; // AAAA  BBBB CCCC DDDD --> when ch is outside the outer loop
    // ch++; // AAAA  AAAA AAAA AAAA --> when ch is inside the outer loop
  }

  return 0;
}