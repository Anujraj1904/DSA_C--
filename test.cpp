#include <iostream>
using namespace std;

int main() {
  int n =4;
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