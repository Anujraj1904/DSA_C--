# 📘 C++ Data Types Overview

A **data type** defines the kind of data a variable can hold. It tells the compiler:
- How much memory to allocate
- What type of operations can be performed on that data

---

## 🔢 Primitive Data Types

| Data Type | Description                          | Example               |
|-----------|--------------------------------------|-----------------------|
| `int`     | Integer numbers                      | `int age = 25;`       |
| `float`   | Floating-point (decimal) numbers     | `float pi = 3.14;`    |
| `double`  | Double-precision decimal numbers     | `double g = 9.81;`    |
| `char`    | Single character                     | `char grade = 'A';`   |
| `bool`    | Boolean (true / false)               | `bool isOpen = true;` |

---

## 🧵 Derived Data Types

| Data Type | Description                          | Example                   |
|-----------|--------------------------------------|---------------------------|
| `array`   | Collection of elements of same type  | `int scores[5];`          |
| `pointer` | Stores memory address                | `int *ptr = &age;`        |
| `function`| Block of reusable code               | `int sum(int a, int b);`  |

---

## 🧱 User-Defined Data Types

| Data Type | Description                          | Example                                 |
|-----------|--------------------------------------|-----------------------------------------|
| `struct`  | Group of variables under one name    | `struct Student { int id; };`           |
| `class`   | Blueprint for objects (OOP)          | `class Car { };`                        |
| `union`   | Memory-efficient grouping            | `union Data { int i; float f; };`       |
| `enum`    | Named constants                      | `enum Color { RED, GREEN };`            |

---

## 🧪 Sample C++ Code

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 25;
    char grade = 'A';
    float pi = 3.14;
    bool isOpen = true;

    cout << "Age: " << age << endl;
    cout << "Grade: " << grade << endl;
    cout << "Pi: " << pi << endl;
    cout << "Is Open: " << isOpen << endl;

    return 0;
}


---

This overview covers the foundational data types you will commonly use in C++ programming.
