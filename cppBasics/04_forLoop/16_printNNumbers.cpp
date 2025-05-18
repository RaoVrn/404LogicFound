/*
Write a C++ program to print numbers from 1 to N using a for loop.

➤ Take an integer input `N`.
➤ Print numbers from 1 to N, separated by a space.

Examples:
Input: 5
Output: 1 2 3 4 5

Use `cout` for printing.
*/

#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	for (int i=1; i<=n; i++) {
		cout << i << " ";
	}
	
	return 0;
}