/*
Write a C++ program to calculate the factorial of a number N using a for loop.

➤ Take an integer input `N`.
➤ Calculate and print the factorial (N!) value.

Examples:
Input: 5
Output: 120

Use `cout` for printing.
*/


#include<iostream>
using namespace std;

int main() {
	int n, fact=1;
	cout << "Enter the value of n: ";
	cin >> n;

	for (int i=n; i>=1; i--) {
		fact = fact * i;
	}

	cout << "Factorial of " << n << " is: " << fact;
	return 0;
}