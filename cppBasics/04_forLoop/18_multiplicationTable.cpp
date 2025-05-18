/*
Write a C++ program to print the multiplication table of a number N up to 10.

➤ Take an integer input `N`.
➤ Print the table from N x 1 to N x 10.

Examples:
Input: 3
Output:
3 x 1 = 3
3 x 2 = 6
...
3 x 10 = 30

Use `cout` for printing.
*/

#include<iostream>
using namespace std;

int main() {
	int n, table;
	cout << "Enter the value of n: ";
	cin >> n;

	for (int i=1; i<=10; i++) {
		table = n*i;
		cout << n << " x " << i << " = " << table << endl;
	}

	return 0;
}