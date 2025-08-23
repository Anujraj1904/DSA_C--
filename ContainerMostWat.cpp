#include <iostream>
#include <climits>
using namespace std;

int main() {
  int height[] = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
  int n = sizeof(height) / sizeof(int); 
  int maxWater = 0;

  for(int i = 0; i < n; i++){
    for(int j = i+1; j <n; j++){
      int width = j - i;
      
      int minHeight = min(height[i], height[j]);
      int area = width * minHeight;
      maxWater = max(maxWater, area);
    }
  }
  cout << "Maximum water that can be contained: " << maxWater << endl;
  return 0;
}