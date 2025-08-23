#include <iostream>
using namespace std;

int main(){
  int price[] = {7,1,5,3,6,4};
  int n = sizeof(price) / sizeof(int);
  int maxProfit = 0;
  
  int bestBuy = price[0];
 
  for(int i = 0; i <n; i++) {
    if(price[i] > bestBuy) {
      maxProfit = max(maxProfit, price[i] - bestBuy);
    }
    bestBuy = min(bestBuy, price[i]);
  }
  cout << "Maximum Profit: " << maxProfit << endl;
  return 0;
}