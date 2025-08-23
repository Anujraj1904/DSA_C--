#include <iostream>
using namespace std;

int main(){

  int n =4;
  int num = 1;

  for (int i = 1; i <= n; i++){
    for (int j =1; j < i+1; j++){
      // cout << num << " ";
      // num++;  // 1 23 456 78910
      cout << j << " ";
    }
    cout << endl;
    // num++;  // 1 22 333 4444
    // num += i;  // 1 23 456 78910
    // num += i - 1;  // 1 22 333 4444
    
  }
  return 0;
}