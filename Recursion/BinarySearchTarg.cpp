#include <iostream>
#include <algorithm>

using namespace std;

int bs(int arr[], int tar, int st, int end)
{
  if (st <= end)
  {
    int mid = st + (end - st) / 2;
    if (arr[mid] == tar)
    {
      return mid;
    }
    else if (arr[mid] <= tar)
    {
      return bs(arr, tar, mid + 1, end);
    }
    else
    {
      return bs(arr, tar, st, mid - 1);
    }
  }
  return -1;
}

int main () {
  int arr[] = {8,6,9,4,5,3,2,1};
  int tar = 5;
  int n = sizeof(arr) / sizeof(arr[0]);
  
  sort(arr, arr+n);
  int st = 0;
  int end = n-1;


  int result = bs(arr, tar, st, end);

  if (result != -1)
    cout << "Element found at index: " << result << endl;
  else
    cout << "Element not found." << endl;

  return 0;
}