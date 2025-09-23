#include <iostream>
using namespace std;
int main() {
  do {
    cout << "Hello world!" << '\n';
  } while (3 > 5);
  return 0;
}

// The code block runs first, before checking the condition.

// After executing the block once, it checks the condition.

// If the condition is true, it repeats the block.
// while(3 < 5) will run the code for infinite time

// If the condition is false, it exits the loop.