#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isAlphaNum(char ch) {
  if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
    return true;
  }
  return false;
}

bool isPalindrome(string str)
{
  int st = 0;
  int end = str.length() - 1;

  while (st < end)
  {
    if(!isAlphaNum (str[st])) {
      st++;
      continue;
    }
        if(!isAlphaNum (str[end])) {
      end--;
      continue;
    }
    if (tolower(str[st]) != tolower(str[end]))
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