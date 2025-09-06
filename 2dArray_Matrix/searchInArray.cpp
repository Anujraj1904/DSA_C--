#include <iostream>
using namespace std;

pair<int, int> linearSearch(int matrix[4][3], int rows, int cols, int target)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (matrix[i][j] == target)
      {
        return {i, j};
      }
    }
  }
  return {-1, -1};
}

int main()
{
  int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
  int rows = 4;
  int cols = 3;
  int target = 8;

  pair<int, int> result = linearSearch(matrix, rows, cols, target);

  if (result.first != -1)
  {
    cout << "target found at ROW " << result.first << " and COLUMN at "<< result.second << endl;
    cout << "Value: " << result.first << "-" <<result.second << endl;
  }       
  else
  {
    cout << "target NOT found" << endl;
  }

  return 0;
}