#include <iostream>
#include <vector>
using namespace std;


// Product of ARRAY expect self

int main() {
  int nums[] = {1,2,3,4,5};
  int size = sizeof(nums) / sizeof(nums[0]);
  vector <int> answer(size, 1);

  for (int i = 0; i < size; i++){
    int product = 1;
    for (int j = 0; j < size; j++){
      if (i != j ) {
        product *= nums[j];
      }
      answer[i] = product;
    }
  }
  cout << "Product of array except self: ";
  
  for (int i = 0; i < size; i++) {
    cout << answer[i] << " ";
  }

  return 0;
}