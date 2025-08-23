#include <iostream>
using namespace std;

void reverseArray(int arr[], int sz) {
  int start = 0;
  int end = sz - 1;

  while (start < end){

    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

int main()
{
  int arr[] = {4, 2, 7, 8, 1, 2, 3, 4, 5};
  int sz = sizeof(arr) / sizeof(int);

  cout << "Original array: ";
  for(int i = 0; i < sz; i++) {
    cout << arr[i] << " "; 
  }
  cout << endl;

  reverseArray(arr, sz);
  cout << "Reverse array: ";
  for(int i = 0; i < sz; i++) {
    cout << arr[i] << " "; 
  }
  cout << endl;
  return 0;
}