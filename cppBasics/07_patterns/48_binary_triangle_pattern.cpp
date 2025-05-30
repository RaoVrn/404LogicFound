/*
Write a C++ program to print a triangle pattern of alternating binary digits `0` and `1`.

➤ Input:
An integer `n` representing the number of rows.

➤ Output Pattern (for n = 5):

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

➤ Pattern Rule:
- Print `i` numbers in the `i`-th row.
- The pattern alternates between 1 and 0.
- Start with 1 and continue alternating with each column.

➤ Method 1: Nested loops in `main()`.
➤ Method 2: Use `printBinaryTriangle(int n)` function.
*/


// -------------------------
// Method 1: Logic inside main function
// -------------------------

#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	for(int i=1; i<=n; i++) {
		int value = i % 2;

		for(int j=1; j<=i; j++) {
			cout << value << " ";
			value = 1 - value;
		}

		cout << endl;
	}

	return 0;
}


// -------------------------
// Method 2: Use printBinaryTriangle(int n) function
// -------------------------

#include<iostream>
using namespace std;

void printBinaryTriangle(int n) {
	for(int i=1; i<=n; i++) {
		int value = i % 2;

		for(int j=1; j<=i; j++) {
			cout << value << " ";
			value = 1 - value;
		}

		cout << endl;
	}
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	printBinaryTriangle(n);

	return 0;
}