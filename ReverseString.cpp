#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string str = "apna college";

  cout << str << endl;
  int n = str.size();
  cout << n << endl;
  int st = 0, end = n-1;

  // while (st < end) {
  // for a char arr[]
    // char c;
    // c = str[st];
    // str[st] = str [end];
    // str[end] = c;

    // swap(str[st], str[end]);
    
    // st++;
    // end--;
  // }

  // for string 
  reverse(str.begin() , str.end());


  for (char ch : str) {
    cout << ch ;
  }


  return 0;
}