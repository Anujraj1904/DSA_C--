// leetCode problem number - 31.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

  vector<int> nums = {1, 2, 3};
  int n = nums.size();
  int pivot = -1;

  // find the pivot

  for (int i = n - 2; i >= 0; i--)
  {
    if (nums[i] < nums[i + 1])
    {
      pivot = i;
      break;
    }
  }

  if (pivot == -1)
  {
    reverse(nums.begin(), nums.end());
  }
  else
  {
    // 2nd step : next large element

    for (int i = n - 1; i > pivot; i--)
    {
      if (nums[i] > nums[pivot])
      {
        swap(nums[i], nums[pivot]);
        break;
      }
    }
  }

  // 3rd step : reverse (pivot+1 to n-1)
  int i = pivot + 1;
  int j = n - 1;

  while (i <= j)
  {
    swap(nums[i++], nums[j--]);
  }

  // ✅ Print the result
  for (int num : nums)
  {
    cout << num << " ";
  }
  cout << endl;
  return 0;
}