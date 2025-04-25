/*
Problem:
Write a C++ program to print "Hello, World!" on the output screen.

You need to demonstrate both of the following methods:

Method 1:
- Print "Hello, World!" directly inside the main() function using cout.

Method 2:
- Create a user-defined function named `printHelloWorld()` that prints "Hello, World!".
- Call this function from the main() function.

Instructions:
- No input is required from the user.
- The output must exactly match the required text, including capitalization and punctuation.

Examples:
Input: (No input)

Output:
Hello, World!

Note:
- Use the `cout` statement for printing in C++.
- Remember to include the iostream header and use the standard namespace.
*/


// ------------------------------------------------------------------------------------------------
// Method 1: Directly printing "Hello, World!" using cout
// ------------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;

int main() {
	cout << "Hello, World!" << endl;
	return 0;
}


// ------------------------------------------------------------------------------------------------
// Method 2: Using a user-defined function to print "Hello, World!"
// ------------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;

void printHelloWorld() {
	cout << "Hello, World!" << endl;
}

int main() {
	printHelloWorld();
	return 0;
}