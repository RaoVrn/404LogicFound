/*
Problem:
Write a C++ program that reads an integer input from the user and prints it on the screen.

You must implement the solution using both of the following methods:

Method 1:
- Take the integer input and print it directly inside the main() function using cin and cout.

Method 2:
- Create a user-defined function named `printNumber()` which accepts an integer parameter and prints it.
- Read the input inside the main() function and pass it to `printNumber()` for printing.

Use:
- For C++: cin >> variable_name; cout << variable_name;

Examples:

Input: 7
Output: 7

Input: -5
Output: -5

Notes:
- Ensure the output matches the input exactly.
- Use standard input/output streams from the iostream library.
*/


// -------------------------
// Method 1: Directly taking input and printing it using cin and cout
// -------------------------

#include<iostream>
using namespace std;

int main() {
    int num;
    
    cin >> num; // taking input from the user
    cout << num << endl; // printing the number
    
    return 0;
}



// -------------------------
// Method 2: Using a user-defined function to print the number
// -------------------------

#include<iostream>
using namespace std;

int num;

void printNumber() {
    cout << num << endl;
}

int main() {
    cin >> num;
    printNumber();
    
    return 0;
}
