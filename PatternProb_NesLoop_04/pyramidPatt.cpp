#include <iostream>
using namespace std;

int main() {
  int n =4;

for (int i = 0; i <n; i++){
  // Print leading spaces
  for (int j = 0; j < n-i-1; j++){
    cout << " ";
  }
  //nums1
  for (int k=1; k<=i+1; k++){
    cout << k;
  }
  //nums2
  for (int l = i; l>0; l--){
    cout << l;
  }
  cout << endl;
}
  return 0;
}