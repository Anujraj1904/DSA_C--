#include <iostream>
using namespace std;

int main() {
  // Post Increment
  int a=10;
  int b=a++;
  cout << "b = " << b << endl; //10
  cout << "a = " << a << endl; // 11
  // a++ --> Kaam, Update

  // Pre Increment
  int a = 10;
  int b = ++a;
  cout << "b = " << b << endl; // 11
  cout << "a = " << a << endl; // 11
  // ++a --> update, Kaam

  // Post Decrement --> a--; kaam, update
  // Pre Decrement --> --a;   update, kaam


  return 0;
}