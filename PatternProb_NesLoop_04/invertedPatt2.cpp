#include <iostream>
using namespace std;

int main(){
  // 1 1 1 1
  //  2 2 2
  //   3 3
  //    4 
  int n = 4;
  for(int i=0; i<=n; i++){
    for(int j=0; j<i; j++){
      cout <<  " ";
    }
    for(int k =0; k<n-i; k++){
      cout << (i+1) << " ";
    }
    cout << endl;
  }

  // 00000
  // 11111
  // 22222
  // 33333
  // 44444
  // for(int i =0; i <= n; i++){
  //     for(int j =0; j<=n; j++){
  //       cout << i;
  //     }
  //     cout << endl;
  // }

  // 0123
  // 0123
  // 0123
  // 0123
   
  // for (int i =0; i<n; i++){
  //   for (int j =0; j<n; j++){
  //     cout <<  j;
  //   }
  //   cout << endl;
  // }

  // 

  

  return 0;
}