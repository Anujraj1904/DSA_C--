#include <iostream>
#include <climits>
using namespace std;

int main() {
  int arr[]={3,-4,5,4,-1,7,-8};
  int sz = int(sizeof(arr)/sizeof(int));
  cout << sz << endl;
  
  int maxSum = INT_MIN;
  int curSum = 0;
  
  for (int i =0; i<sz; i++)
  {
    curSum += arr[i];
    maxSum = max(curSum, maxSum);
    if (curSum < 0){
      curSum = 0;
    }
  }
  
  cout << "sum = " << maxSum << endl;
  
  
  return 0;

}