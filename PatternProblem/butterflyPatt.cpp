#include <iostream>
using namespace std;

int main()
{

  int n = 4;
  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j <= i; j++)
    {
      cout << "*";
    }

    for (int k = 0; k < (n - i - 1); k++)
    {
      cout << " ";
    }
    for (int l = 0; l < (n - i -1); l++){
      cout << " ";
    }
    for (int m=0; m <= i; m++){
      cout << "*";
    }
    cout << endl;
  }
  for (int a=0; a<n; a++){
    for (int b = 0; b <= (n-a-1); b++){
      cout << "*";
    }
    for (int c = 0; c < a; c++){
      cout << " ";
    }
    for (int d = 0; d < a; d++)
    {
      cout << " ";
    }
    for (int e = 0; e <= (n - a - 1); e++)
    {
      cout << "*";
    }
    cout << endl;
  }
  

  return 0;
}