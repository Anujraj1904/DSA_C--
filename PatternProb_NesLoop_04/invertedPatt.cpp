#include <iostream>
using namespace std;

int main()
{
  // 1111
  //  222
  //   33
  //    4
  int n = 4;

  for (int i = 0; i < n; i++)
  {
    // Print leading spaces
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    for (int j = 0; j < n - i; j++)
    {
      cout << i + 1                                  ;
      // cout << i + 1 << " ";
    }
    cout << endl;
  }

  // AAAA
  //  BBB
  //   CC
  //    D
  char ch = 'A';

  for (int i = 0; i < n; i++)
  {
    // char ch = 'A';

    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    for (int j = 0; j < n - i; j++)
    {
      cout << ch;
      // ch++;
    }
    cout << endl;
    ch++;
  }

  // ABCD
  //  ABC
  //   AB
  //    A

  for(int i=0; i< n; i++){
    for(int j =0;j<i; j++){
      cout << " ";
    }
  char cr = 'A';

    for(int k=0; k<n-i; k++ ){
      cout << char(cr);
    }
    cout << endl;
      cr++;

  }
  

  return 0;
}