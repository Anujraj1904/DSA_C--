// square pattern with increment for n = 3
// 123
// 456
// 789


#include <iostream>
using namespace std;

int main(){
  int n =3;
  int num = 1; // starting number
// outer loops that how many lines to print
  for (int i =1; i<=n; i++){
    // inner loop to print numbers in each line
    for (int j =1; j <=n; j++){
      cout << num;
      num++;
    }
    cout << endl;
  }
  return 0;
}