#include <iostream>
using namespace std;

int main() {
  int arr[] = {0, 1, 2, 0, 1, 2, 1, 0};
  int n = sizeof(arr) / sizeof(arr[0]);

  int count0s = 0, count1s = 0, count2s = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == 0) count0s++;
    else if (arr[i] == 1) count1s++;
    else if (arr[i] == 2) count2s++;
  }
  int index = 0;  
  for (int i = 0; i < count0s; i++) arr[index++] = 0;
  for (int i = 0; i < count1s; i++) arr[index++] = 1;
  for (int i = 0; i < count2s; i++) arr[index++] = 2;

  for (int i = 0; i < n; i++) cout << arr[i] << " ";
  cout << endl;
  
  return 0;
}