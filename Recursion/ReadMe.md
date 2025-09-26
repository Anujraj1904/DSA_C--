# 📘 Recursion in Programming

Recursion is a programming technique where a function calls itself—either directly or indirectly—to solve a problem. The function performing this self-call is known as a **recursive function**.

Recursion works by breaking a complex problem down into smaller, simpler instances of the same problem until it reaches a **base case**, which is the simplest form that can be solved directly without further recursion. Once the base case is reached, the function stops calling itself and starts returning values back through the previous calls to build up the final solution.

---

## 🔑 Key Points About Recursion

- ✅ It must have a **base case** to prevent infinite recursion.
- 🧩 It works by solving **smaller subproblems** and combining their results.
- 🧠 Each recursive call adds a new layer to the **call stack**, so too much recursion may cause a **stack overflow**.
- 📌 Common examples include:
  - Calculating **factorials**
  - Generating the **Fibonacci series**
  - Traversing **tree** or **graph** structures

---

## 💡 Why Use Recursion?

Recursion is a way to define a problem in terms of itself, which can lead to **elegant** and **concise** solutions for many algorithmic challenges.

---

## 🧪 Example: Factorial in C++

```cpp
#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0) {
        return 1; // Base case
    } else {
        return n * factorial(n - 1); // Recursive call
    }
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}
