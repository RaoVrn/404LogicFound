/*
Problem:
Write a C++ program to swap two integers using a function that uses pass by value.

Requirements:
- Create a function `void swap(int a, int b)` that attempts to swap the two numbers.
- In the main function, take input for `a` and `b`, call the `swap` function, and print the values of `a` and `b` again to observe the result.

Expected Output:
The original values should remain unchanged after the function call.

Note:
This demonstrates that pass-by-value does not affect the original variables.
*/


#include<iostream>
using namespace std;

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	
	cout << "After swapping --- a: " << a << ", b: " << b << endl;
}

int main() {
	int a, b;
	cout << "Enter the value of a and b: ";
	cin >> a >> b;

	swap(a, b);
	cout << "Before swapping --- a: " << a << ", b: " << b << endl;
	
	return 0;
}