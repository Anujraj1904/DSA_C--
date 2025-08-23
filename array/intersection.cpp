#include <iostream>
using namespace std;
// write a function to find the intersection of two arrays
int main() {

  int arr1[] = {1, 2, 3, 4, 5};
  int arr2[] = {3, 4, 5, 6, 7};
  int sz1 = int(sizeof(arr1)/sizeof(int));
  int sz2 = int(sizeof(arr2)/sizeof(int));

  int res[]={};
  int resIndex = 0;

  for (int i =0; i <sz1; i++){
    for (int j = 0; j < sz2; j++){
      if(arr1[i] == arr2[j]) {
        res[resIndex++] = arr1[i];
        break; // to avoid duplicates in res
      }
    }
  }



  cout << "Intersection of the two arrays: ";
  for (int i = 0; i < resIndex; i++) {
    cout << res[i] << " ";
  }
  // cout << sz1 << " " << sz2 << endl;
  return 0;
}