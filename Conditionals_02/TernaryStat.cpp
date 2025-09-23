#include <iostream>
using namespace std;
int main () {
  // condition ? st1 : str2;
  int n = 7;
  cout <<  (n >= 0 ? "Positive" : "Negative") << '\n';

  // Check Even or Odd
  int num = 10;
  cout << (num % 2 == 0 ? "Even" : "Odd") << '\n';

  // Check if Character is Vowel
  char ch = 'e';
  cout << ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ? "Vowel" : "Consonant") << '\n';

  // Assign Grade Based on Score
  int score = 85;
  char grade = (score >= 90 ? 'A' : (score >= 80 ? 'B' : 'C'));
  cout << "Grade: " << grade << '\n';

  // Find Maximum of Two Numbers
  int a = 5, b = 8;
  int max = (a > b ? a : b);
  cout << "Max: " << max << '\n';

  // Nested Ternary for Multiple Conditions
  int x = 0;
  cout << (x > 0 ? "Positive" : (x < 0 ? "Negative" : "Zero")) << '\n';

  return 0;
}

// condition ? expression_if_true : expression_if_false;

// The ternary operator in C++ is a compact way to write conditional statements.