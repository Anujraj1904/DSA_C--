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



<!-- ******************************************** -->
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






<!-- **************************************** -->
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
// ********************************************************
# 🔄 C++ Type Casting

**Type casting** is the process of converting one data type into another. It’s like telling the compiler:  
> “Treat this value as if it were a different type.”

This is especially useful when you're working with mixed types (like integers and floats) or need to force a conversion for compatibility or precision.

---

## ⚠️ Why Type Casting Matters

- Casting can lead to **data loss** (e.g., converting `float` to `int`).
- Misuse of `reinterpret_cast` or `const_cast` can cause **undefined behavior**.
- Always prefer `static_cast` for **clarity and safety** in regular conversions.

---

## 🧠 Common Casts in C++

| Cast Type         | Purpose                                |
|-------------------|----------------------------------------|
| `static_cast`     | Basic conversions (`int` to `float`, etc.) |
| `dynamic_cast`    | Safe downcasting in inheritance        |
| `const_cast`      | Remove `const` or `volatile` qualifier |
| `reinterpret_cast`| Low-level bit reinterpretation         |

---

## 🧪 Example Code

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    cout << a << '\n';

    // Implicit casting: int to float
    float b = a;
    cout << b << '\n';

    float pi = 3.14;
    cout << pi << '\n';

    // Explicit casting: float to int (C-style)
    int x = (int)pi; // x becomes 3
    cout << x << '\n';

    // Alternative: static_cast (safer and more readable)
    // int x = static_cast<int>(pi);
    // cout << x << '\n';

    return 0;
}


// ***************************************

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
