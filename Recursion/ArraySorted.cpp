#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> arr, int n){
    if( n == 0 || n == 1){
      return true;
    }
    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
  }

int main()
{
  // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  // int n = sizeof(arr) / sizeof(arr[0]);

  vector<int> arr = {1,2,6,4,5};
  // bool isSorted = true;
  // for (int i = 0; i < n - 1; i++)
  // {
  //   if (arr[i] > arr[i + 1])
  //   {
  //     isSorted = false;
  //     break;
  //   }
  // }

  // if (isSorted)
  // {
  //   cout << "Array is sorted in non-decreasing order." << endl;
  //   return 0;
  // }
  // else
  // {
  //   cout << "Array is not sorted." << endl;
  //   return 1;
  // }

  
  cout << isSorted(arr, arr.size()) << endl;


}
