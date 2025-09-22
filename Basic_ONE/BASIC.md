# 🚀 C++ Boilerplate and Output Basics

This guide introduces the **boilerplate structure** of a C++ program and demonstrates how to use `cout` for printing output to the terminal.

---

## 🧱 Boilerplate Code

Every C++ program starts with a basic structure:

```cpp
#include <iostream>
using namespace std;

int main() {
    return 0;
}

// ******************************************
#include <iostream>
using namespace std;

int main() {
    // Print without line break
    cout << "Anuj";

    // Print with line break using endl
    cout << "Anuj" << endl;

    // Print with line break using '\n'
    cout << "Anuj" << '\n';
    cout << "Anuj" << '\n';

    // Print multiple lines using \n inside string
    cout << "Anuj \n raj";

    return 0;
}


### Explanation
- `cout << "text";` prints text without moving to a new line
- `endl` inserts a newline and flushes the output buffer
- `'\n'` inserts a newline character and is generally faster than `endl` because it does not flush the buffer
- `\n` can also be used inside strings for multi-line output

---

## 💡 Summary

- Boilerplate code provides a minimal template to start C++ programming
- `cout` is the standard way to output text to the console
- Use `endl` or `'\n'` to add line breaks, with `'\n'` being the more performant choice for many consecutive line breaks

---
