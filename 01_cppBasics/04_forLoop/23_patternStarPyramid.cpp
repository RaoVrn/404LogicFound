/*
Write a C++ program to print a right-angled triangle star pattern using nested for loops.

➤ Take an integer input `N`.
➤ Print a pattern with N rows as shown below.

Examples:
Input: 3
Output:
*
**
***

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
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}