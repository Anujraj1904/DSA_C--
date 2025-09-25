#include <iostream>
using namespace std;

int main()
{
  // *
  // **
  // ***
  // ****
  int n = 4; // size of the square pattern
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cout << "*";
    }
    cout << endl; // move to the next line after printing stars
  }

  // 1
  // 2 2
  // 3 3 3
  // 4 4 4 4

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j < i + 1; j++)
    {
      cout << i;
    }
    cout << endl;
  }
  // 1
  // 1 2
  // 1 2 3
  // 1 2 3 4
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j < i + 1; j++)
    {
      cout << j;
    }
    cout << endl;
  }

  // A
  // B B
  // C C C
  // D D D D
  char ch = 'A';

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j < i + 1; j++)
    {
      cout << ch;
    }
    cout << endl;
    ch++;
  }

  // A
  // A B
  // A B C
  // A B C D
  for (int i = 1; i <= n; i++)
  {
    char ch = 'A';
    for (int j = 1; j < i + 1; j++)
    {
      cout << ch;
      ch++;
    }
    cout << endl;
  }

  return 0;
}