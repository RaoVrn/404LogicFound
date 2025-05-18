/*
Write a C++ program to print the first N numbers of the Fibonacci series using a for loop.

➤ Take an integer input `N`.
➤ Print the first N Fibonacci numbers separated by space.

Examples:
Input: 5
Output: 0 1 1 2 3

Use `cout` for printing.
*/


#include<iostream>
using namespace std;

int main() {
	int n, a=0, b=1;
	cout << "Enter the number: ";
	cin >> n;

	for (int i=1; i<=n; i++) {
		cout << a << " ";
		int next = a + b;
		a = b;
		b = next;
	}

	return 0;
}