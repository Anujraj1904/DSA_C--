#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isPalindrome(string str)
{
  int st = 0;
  int end = str.length() - 1;

  while (st < end)
  {
    if (str[st] != str[end])
    {
      return false;
    }
    st++;
    end--;
  }

  return true;
}

int main()
{
  string str;
  cout << "Enter you word to if PALINDROM or NOT : ";
  getline(cin, str);

  cout << "String : " << str << endl;



  if (isPalindrome(str))
  {
    cout << "It's a palindrome!" << endl;
  }
  else
  {
    cout << "Not a palindrome." << endl;
  }
  return 0;
}