#include <iostream>
using namespace std;

int main()
{
  char ch;
  cout << "Enter your character : ";
  cin >> ch;

  // if (ch >= 'a' && ch <= 'z')
  // {
  //   cout << "Lowwer Case" << '\n';
  // }
  // else
  // {
  //   cout << "Upper Case" << '\n';
  // }

  // USING ASCII VALUE
  if ( ch >= 65 && ch <= 90) {
    cout << "Upper Case \n";
  }else {
    cout << "Lower Case \n";
  }
  return 0;
}