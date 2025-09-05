#include <iostream>
using namespace std;

int main() {
  string s1 = "daabcbaabcbc";
  string part = "abc";

  // removing all the "abc" which are together in s1;

  while(s1.length () > 0 && s1.find(part) < s1.length()) {
    s1.erase(s1.find(part), part.length());
  }

  cout << s1 << endl;
  return 0;
}