// Variables -- Container that store data.
// a variable is like a labeled container that stores data in your computer's memory.

#include <iostream>
using namespace std;
int main()
{
  // Declaring int/number
  int age = 25;
  // Declaring char/string
  char grad = 'A';
  // printing grid value in output
  cout << grad << '\n'; // A

  grad = 'c';

  cout << age << '\n';  // 25
  cout << grad << '\n'; // c

  return 0;
}

// Rules for Naming Variables

// Must start with a letter or underscore(_)
//  Can contain letters,
// digits, and underscores
// Cannot use C++ keywords(like int, return, class)
// Case- sensitive(Score and score are different)