/*
Write a C++ program to print a number pyramid pattern using nested for loops.

➤ Take an integer input `N`.
➤ Print a pattern like this:
1
1 2
1 2 3
... up to N

Examples:
Input: 4
Output:
1
1 2
1 2 3
1 2 3 4

Use `cout` for printing.
*/


#include<iostream>
using namespace std;

int main() {
	int n;
	
	cout << "Enter the value of n: ";
	cin >> n;

	for (int i=1; i<=n; i++) {
		for (int j=1; j<=i; j++) {
			cout << j;
		}
		cout << endl;
	}

	return 0;
}