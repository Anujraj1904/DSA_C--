# 🚀 Learning About Loops in C++

This project introduces the concept of **loops** in C++, which are fundamental for controlling the flow of a program and executing repetitive tasks efficiently.

## 📘 Output Preview



## 🔁 Types of Loops in C++

### 1. **While Loop**
- Executes a block of code **as long as** the condition is true.
- Condition is checked **before** each iteration.
```cpp
int i = 0;
while (i < 5) {
  cout << i << " ";
  i++;
}


### 2. For Loop
- Best suited when the number of iterations is known in advance.
- Has initialization, condition, and increment/decrement/updation in a single line.
```cpp
int i =0;
for (int i = 0; i < 5; i++) {
  cout << i << " ";
}

### 3. Do-While Loop
- Executes the block of code **at least once** before checking the condition.
- Condition is checked **after** each iteration.

```cpp
int i = 0;
do {
  cout << i << " ";
  i++;
} while (i < 5);
