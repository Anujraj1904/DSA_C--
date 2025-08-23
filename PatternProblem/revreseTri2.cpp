#include <iostream>
using namespace std;

int main(){
  int n =4;

  for(int i = 0; i < n ;i++){
  char ch = 'A' + i;
    for(char j =ch; j>='A'; j--){
      cout << j;
      // ch--;

    }
    cout << endl;

  }


  return 0;
}