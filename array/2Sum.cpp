#include <iostream>
#include <algorithm>
using namespace std;
// Brute force Approch

// int main() {
//   int arr[] = {5, 2, 11, 7, 15};
//   int target = 10;

//   int n = sizeof(arr) / sizeof(arr[0]);
//   // cout << n << endl;

//   bool found = false;

//   int sum = 0;

//   for(int i =0; i<n; i++){
//     for(int j=i+1; j<n; j++){
//       if(i == j) continue;
//       sum = arr[i] + arr[j];
//       if(sum == target) {
//         cout <<"[" <<i << j <<"]"<< endl;
//         found = true;
//       }
//     }
//   }
//   if(!found){
//     cout << "Sum not found" << endl;
//   }
//   return 0;
// }

// Better Approch
int main() {
  int arr[] = {5, 2, 11, 7, 15};
  int target = 9;

  int n = sizeof(arr) / sizeof(arr[0]);
  
  sort(arr, arr+n);

  for (int i =0; i< n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
    int st= 0; 
    int end = n-1;
    int sum = 0;
    bool found =  false;
    while (st < end){
        sum = arr[st] + arr[end];
        if(sum == target) {
            cout << st << " "<< end ;
            found = true;
            break;
        } else if ( sum > target) {
            end --;
        } else {
            st++;
        }
    }
    if(!found) {
        cout << "not found";
    }

  return 0;
}

/*  LeetCode

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    int sum = 0;
    unordered_map<int, int> numMap;
    for (int i = 0; i<n; i++){
        for(int j = i+1; j<n;j++){
            if(i==j) continue;
            sum = nums[i] + nums[j];
            if(sum == target) {
                return {i,j};
            }
        }
    }
    return {};
    }
};
*/