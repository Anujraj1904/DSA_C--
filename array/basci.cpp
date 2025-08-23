#include <iostream>
using namespace std;

int main() {
  int marks[5] = {85, 90, 78, 92, 88};
  double price[] = {19.99, 29.99, 9.99, 49.99, 15.99};
  char grade[5] = {'A', 'B', 'C', 'A', 'B'};
  cout << marks[0] << endl;
  cout << price[2] << endl;
  cout << grade[3] << endl;

  // int size = sizeof(marks);
  int size = sizeof(marks) / sizeof(int);

  cout << "Size of marks array: " << size << endl;
  return 0;
}