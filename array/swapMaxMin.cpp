#include <iostream>
#include <climits>
using namespace std;

int main() {
  
  int arr[] = {3, 5, 1, 4, 2};
  int sz = sizeof(arr) / sizeof(int);
  
  int indexoflargest = -1;
  int indexofsmallest = -1;

  int largest = INT_MIN;
  int smallest = INT_MAX;

  for(int i = 0; i < sz; i++){
    // smallest = min(arr[i] , smallest);
    // largest = max(arr[i], largest);
    if(arr[i] < smallest) {
      smallest = arr[i];
      indexofsmallest = i;
    }
    if(arr[i] > largest){
      largest = arr[i];
      indexoflargest = i;
    }

  }

  cout << "index of Smallest: " << indexofsmallest << " " << "Smallest number : " << smallest <<endl;
  cout << "index of Largest: " << indexoflargest << " " << "largest number : " << largest << endl;
  cout << "Before swapping Array:" << endl;
  for (int i = 0; i < sz; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  int temp = arr[indexofsmallest];
  arr[indexofsmallest] = arr[indexoflargest];
  arr[indexoflargest] = temp;


  // swap(indexofsmallest, indexoflargest);

  cout << "After swapping Array:" << endl;
  for(int i = 0; i < sz; i++){
    cout << arr[i] << " ";
  }
  return 0;

}