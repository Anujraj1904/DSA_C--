# 👋 C++ User Input Example

This simple C++ program demonstrates how to take **user input** using `cin` and display a personalized greeting using `cout`.

---

## 🧠 What You'll Learn

- How to declare a `string` variable
- How to take input from the user
- How to print output to the console

---

## 🧪 Example Code

```cpp
#include <iostream>
using namespace std;

int main()
{
    string name; // Declare a variable to store the name
    cout << "Enter your name: ";
    cin >> name; // Take input from the user
    cout << "Hello, " << name << "!" << endl; // Print a greeting
    return 0;
}

---

## 💡 Notes

- `cin` reads input from the keyboard using the extraction operator `>>`.
- Using `cin >> name` only reads input until the first whitespace (space, tab, newline). For full line input (including spaces), use `getline(cin, name)`.
- Example with `getline` to read full names or sentences:


- Always include `#include <iostream>` and use the `std` namespace or prefix `std::` before `cin` and `cout`.

---

