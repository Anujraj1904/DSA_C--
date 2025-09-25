#include <iostream>
using namespace std;

int main()
{
  int n = 4;
  char ch = 'A';

  // A
  // B C
  // D E F
  // G H I J

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << ch;
      ch++;
    }
    cout << endl;
  }

  // A
  // A A
  // A A A
  // A A A A
  char cha = 'A';

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << cha;
    }

    cout << endl;
  }

  // A
  // BB
  // CCC
  // DDD
  char chae = 'A';

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << chae;
    }
    chae++;

    cout << endl;
  }

  // A
  // B A
  // C B A
  // D C B A

  char cr = 'A';
  for (int i = 0; i < n; i++)
  {
    for (char j = cr; j >= 'A'; j--)
    {
      cout << j;
    }
    cr++;
    cout << endl;
  }

  return 0;
}