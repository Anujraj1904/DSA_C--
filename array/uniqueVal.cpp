#include <iostream>
using namespace std;

// printing unique values in an array
void printunique(int arr[], int sz){
  for (int i = 0; i < sz; i++){
    bool isUnique = true;
    for (int j = 0; j <sz ; j++) {
      if (arr[i] == arr[j] && i != j){
        isUnique = false;
        break;
      }
    }
    if (isUnique) {
      cout << arr[i] << " ";
  }

}
}


int main (){

  int arr[] = {1,2,5,8,6,3,1,4,7,2,8,3,1,4};

  int sz = int(sizeof(arr)/sizeof(int));
  cout << "Size of array: " << sz << endl;

  cout << "Unique values in the array: ";
  printunique(arr, sz);
  cout << endl;
  return 0;
}