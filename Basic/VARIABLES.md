# 🧠 C++ Variables Overview

In C++, a **variable** is like a labeled container that stores data in your computer's memory. It allows you to store, retrieve, and manipulate values during the execution of a program.

---

## 📦 What Is a Variable?

- A variable holds data such as numbers, characters, or boolean values.
- It has a **name**, a **type**, and a **value**.
- The compiler uses the variable's type to determine how much memory to allocate and what operations are allowed.

---

## 🧪 Example Code

```cpp
#include <iostream>
using namespace std;

int main()
{
    // Declaring int/number
    int age = 25;

    // Declaring char/string
    char grad = 'A';

    // Printing grade value
    cout << grad << '\n'; // Output: A

    // Reassigning grade
    grad = 'c';

    // Printing age and updated grade
    cout << age << '\n';  // Output: 25
    cout << grad << '\n'; // Output: c

    return 0;
}


---

## 💡 Notes

- Variable **declaration** includes the type and a name.
- Variable **initialization** assigns a value during declaration.
- Variables can be **reassigned** new values later in the program.
- Common types include `int` for integers, `char` for characters, `bool` for boolean values, `double` for floating-point numbers, and `string` for text (with the `#include <string>` directive).

---

Feel free to integrate this with your other C++ learning documentation.
