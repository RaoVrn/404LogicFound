/*
Problem:
Write a C++ program to input two numbers and swap them using a third (temporary) variable.

Method 1:
- Swap directly in main.

Method 2:
- Create a function `swapWithTemp(int a, int b)` that performs and displays the swap.

Input:
2 5

Output:
a = 5  
b = 2
*/


// -------------------------
// Method 1: Directly swapping in main
// -------------------------

#include<iostream>
using namespace std;

int main() {
	int a, b, temp;
	
	cout << "Enter the value of a and b: ";
	cin >> a >> b;
	
	temp = a;
	a = b;
	b = temp;

	cout << "After reversing a is: " << a << " and b is " << b << endl;
	return 0;
}


// -------------------------
// Method 2: Using a user-defined function to swap
// -------------------------

#include<iostream>
using namespace std;

void swapWithTemp(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	
	cout << "After reversing a is: " << a << " and b is " << b << endl;
}

int main() {
	int a, b , temp;
	
	cout << "Enter the value of a and b: ";
	cin >> a >> b;

	swapWithTemp(a, b);
	return 0;
}