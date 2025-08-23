#include <iostream>
using namespace std;

int main() {
  int arr[] = {3,4,5,6,7,0,1,2};
  int n = sizeof(arr)/sizeof(int);
  int st = 0;
  int end = n-1;
  int target=0;

  while(st <= end){
    int mid = st +(end-st)/2;

    if(arr[mid]==target){
      cout << "target found at index " << mid << endl;
      return 0;
    }

    if(arr[st] <= arr[mid]){
      //Left half is sorted
      if(arr[st] <= target && target <= arr[mid]){
        end = mid-1;
      }
      else{
        st = mid+1;
      }
    }
    else {
      // Right half is sorted
      if(arr[mid]<= target && target <= arr[end]){
        st = mid+1;
      }
      else{
        end =mid-1;
      }
    }
  }


  return -1;
}