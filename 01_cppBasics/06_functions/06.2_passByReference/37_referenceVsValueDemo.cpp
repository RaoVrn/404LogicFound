/*
📌 Problem:
Write a C++ program to demonstrate the difference between pass by value and pass by reference.

🎯 Objective:
Understand how function arguments behave differently when passed by value vs. by reference.

➤ Create the following two functions:

1. void updateByValue(int x)
   - Modify `x` to 20 inside the function.
   - Print the value of `x` inside the function.

2. void updateByReference(int &x)
   - Modify `x` to 20 inside the function.
   - Print the value of `x` inside the function.

➤ In the `main()` function:
   - Read an integer from the user (e.g., `x = 10`).
   - Call `updateByValue(x)` and print `x` after the function call.
   - Call `updateByReference(x)` and print `x` after the function call.

📥 Input:
Enter a number: 10

📤 Output:
Inside updateByValue: x = 20  
Outside after updateByValue: x = 10  
Inside updateByReference: x = 20  
Outside after updateByReference: x = 20

📝 Note:
- Pass by value does not change the original variable.
- Pass by reference does modify the original variable.
*/


#include<iostream>
using namespace std;

void updateByValue(int x) {
	x = 20;
	cout << "Inside updateByValue: x = " << x << endl;
}

void updateByReference(int &x) {
	x = 20;
	cout << "Inside updateByReference: x = " << x << endl;
}

int main() {
	int x = 10;
	
	updateByValue(x);
	cout << "Outside updateByValue: x = " << x << endl;

	updateByReference(x);
	cout << "Outside updateByReference: x = " << x << endl;

	return 0;
}