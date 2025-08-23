// Sum of odd number from 1 to n using while loop

#include <iostream>
using namespace std;

int main() {
    int n, oddSum = 0, i = 1;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 1) {
        cout << "Please enter a positive integer greater than 0." << endl;
        return 1;
    }
    while (i <= n)
    {
        if (i % 2 != 0) {
            oddSum += i;
        }
        i++;
    }
    cout << "Sum of odd numbers from 1 to " << n << " is: " << oddSum << endl;
    return 0;
    
}