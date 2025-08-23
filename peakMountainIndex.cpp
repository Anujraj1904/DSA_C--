#include <iostream>
using namespace std;

int main()
{
  int arr[] = {0, 3, 8, 9, 5, 2};
  int st = 1;
  int n = sizeof(arr) / sizeof(int);
  int end = n - 2;
  while (st <= end)
  {
    int mid = st + (end - st) / 2;
    if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
    {
      cout << "Peak found at index " << mid << " with value " << arr[mid] << endl;
      return 0;
    }
    else if (arr[mid - 1] < arr[mid])
    {
      st = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  cout << "No peak found!" << endl;
  return 0;
}