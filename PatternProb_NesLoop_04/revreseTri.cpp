#include <iostream>
using namespace std;

int main(){
  // 1
  // 2 1
  // 3 2 1
  // 4 3 2 1   
  int n =4;
  for(int i =1; i <= n; i++){
    for (int j = i ; j > 0; j--){
      cout << j;
    }
    cout << endl;
  }

  // 1
  // 2 2
  // 3 3 3
  // 4 4 4 4

  for (int i = 1; i <= n; i++)
  {
    for (int j = i; j > 0; j--)
    {
      cout << i;
    }
    cout << endl;
  }

  // A
  // B A
  // C B A
  // D C B A

  for (int i = 0; i < n; i++)
  {
    char ch = 'A' + i;
    for (char j = ch; j >= 'A'; j--)
    {
      cout << j;
      // ch--;
    }
    cout << endl;
  }

  // More Triangle question are in floyd's file
  return 0;

}