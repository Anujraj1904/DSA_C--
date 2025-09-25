#include <iostream>
using namespace std;
int main()
{
  // 123
  // 456
  // 789
  int n = 4;
  int num = 1;
  for (int i = 1; i < n; i++)
  {
    for (int j = 1; j < n; j++)
    {
      cout << num;
      num++;
    }
    cout << endl;
  }

  // A B C D
  // E F G H
  // I J K L
  // M N O P
  char ch = 'A';
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << ch;
      ch = ch + 1;
    }
    cout << endl;
  }

  return 0;
}