# 🔁 C++ Increment and Decrement Operators

This program demonstrates the use of **increment** and **decrement** operators in C++, including both **post** and **pre** variations. These operators are commonly used to increase or decrease the value of a variable by 1.

---

## 📌 Operators Covered

- `a++` → Post-increment
- `++a` → Pre-increment
- `a--` → Post-decrement
- `--a` → Pre-decrement

---

## 🧪 Code Example

```cpp
#include <iostream>
using namespace std;

int main() {
    // Post Increment
    int a = 10;
    int b = a++;
    cout << "Post-Increment:\n";
    cout << "b = " << b << endl; // Output: 10
    cout << "a = " << a << endl; // Output: 11

    // Pre Increment
    int x = 10;
    int y = ++x;
    cout << "\nPre-Increment:\n";
    cout << "y = " << y << endl; // Output: 11
    cout << "x = " << x << endl; // Output: 11

    // Post Decrement
    int m = 10;
    int n = m--;
    cout << "\nPost-Decrement:\n";
    cout << "n = " << n << endl; // Output: 10
    cout << "m = " << m << endl; // Output: 9

    // Pre Decrement
    int p = 10;
    int q = --p;
    cout << "\nPre-Decrement:\n";
    cout << "q = " << q << endl; // Output: 9
    cout << "p = " << p << endl; // Output: 9

    return 0;
}

