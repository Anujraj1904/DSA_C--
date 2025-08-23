#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

bool canPlaceCows(vector<int> &positions, int N, int c, int minDist) {
  int cows = 1;
  int lastPos = positions[0];

  for(int i =1; i < N; i++) {
    if(positions[i] - lastPos >= minDist) {
      cows++;
      lastPos = positions[i];
      if(cows == c) {
        return true;
      }
    }
  }
  return false;
}

int getMinDist(vector<int> &positions, int N, int c) {
  sort(positions.begin(), positions.end());
  int st = 1 , end = positions[N-1] - positions[0] , ans = -1;

  while (st <= end) {
    int mid = st + (end -st) /2;
    if(canPlaceCows(positions, N, c, mid)) {
      ans = mid;
      st = mid + 1;
    } else {
      end = mid -1;
    }
   }
 return ans;
}

int main() {
  int N = 5,  c =3;
  vector<int> positions = {1, 2, 8, 4, 9};

  cout << getMinDist (positions, N, c) << endl;
  return 0;
}