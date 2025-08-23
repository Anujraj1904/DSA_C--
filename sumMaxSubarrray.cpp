#include <iostream>
#include <climits>
using namespace std;

int main() {
  int arr[] = {1,2,3,4,5};
  int sz = int(sizeof(arr)/sizeof(int));

  int maxSum = INT_MIN;

  cout << "Size of array : " << sz << endl;

  for (int st =0; st < sz; st++){
    int currSum = 0;
    for(int end = st; end < sz; end++){
      currSum += arr[end];
      maxSum = max(currSum, maxSum);
    }
  }

  cout << "max of subarrray sum = " << maxSum << endl ;


  return 0;

}