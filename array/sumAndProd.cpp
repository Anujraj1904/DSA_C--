#include <iostream>
using namespace std;

int main() {

  int arr[] = {1, 2, 3, 4, 5};
  int sz = sizeof(arr) / sizeof(int);
  int sum = 0;
  int prod = 1;

  for (int i = 0; i < sz; i++) {
    sum += arr[i];
    prod *= arr[i];
  }

  cout << "Sum of array elements: " << sum << endl;
  cout << "Product of array elements: " << prod << endl;

  return 0;
}