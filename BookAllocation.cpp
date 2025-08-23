#include <iostream>
#include <vector>
using namespace std;

// Even though maxAllowedPages is not defined in main(), it is defined and passed from inside the allocateBooks() function.

// maxAllowedPages is a parameter of isValid()

// It gets its value from mid, which is calculated in allocateBooks() using binary search

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages)
{
  int stud = 1;
  int pages = 0;
  for (int i = 0; i < n; i++)  // time complexity O(n)
  {
    if (arr[i] > maxAllowedPages)
    {
      return false; // A single book has more pages than allowed
    }
    if (pages + arr[i] <= maxAllowedPages)
    {
      pages += arr[i]; // Allocate current book to the current student
    }
    else
    {
      stud++;         // Need to allocate to a new student
      pages = arr[i]; // Start new allocation with current book
    }
  }
  return stud > m ? false : true; // Check if we have enough students
}

int allocateBooks(vector<int> &arr, int n, int m)
{
  if (m > n)
  {
    return -1; // Not enough books for each student
  }
  int sum = 0;
  for (int i = 0; i < n; i++) // time complexity O(n)
  {
    sum += arr[i];
  }

  int st = 0, end = sum;
  int ans = -1;

  while (st <= end) // time complexity O(log(sum) *n)
  {
    int mid = st + (end - st) / 2;

    if (isValid(arr, n, m, mid))  
    {
      ans = mid;
      end = mid - 1;
    }
    else
    {
      st = mid + 1;
    }
  }

  return ans;
}

int main()
{
  vector<int> arr = {2, 1, 3, 4};
  int n = arr.size();
  int m = 2; // Number of students

  cout << allocateBooks(arr, n, m) << endl;
  return 0;
}