#include <iostream>
#include <climits> // Needed for INT_MAX
using namespace std;

// program to find the smallest number in a array

int main() {

  int nums[] = {5, 15, 22, -1, -15, -24};
  int size = 6;

  int smallest = INT_MAX;
  int largest = INT_MIN;
  int indexlargest = -1;
  int indexsmallest = -1;

  for (int i = 0; i < size; i++ ) {
    if (nums[i] < smallest){
      smallest = nums[i];
      indexsmallest = i;
    }
    if (nums[i] > largest) {
      largest = nums[i];
      indexlargest = i;
    }

    // min, max
    // smallest = min(nums[i], smallest);
    // largest = max(nums[i], largest);
  }

  cout << "largest = " << largest << endl;
  cout << "index of largest = " << indexlargest << endl;

  cout << "smallest = " << smallest << endl;
  cout << "index of smallest = " << indexsmallest << endl;

  return 0;
}