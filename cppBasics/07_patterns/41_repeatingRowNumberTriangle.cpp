/*
Write a C++ program to print a triangle where each row contains the same digit repeated equal to the row number.

➤ Input:
An integer `n` representing the number of rows.

➤ Output Pattern (for n = 5):

1
22
333
4444
55555

➤ Method 1: Logic in `main()`.
➤ Method 2: Use `printRepeatingRowNumbers(int n)`.
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
		for(int j=1; j<=i; j++) {
			cout << i;
		}
		cout << endl;
	}

	return 0;
}



// -------------------------
// Method 2: Using a function
// -------------------------

#include<iostream>
using namespace std;

void printRepeatingRowNumbers(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++) {
			cout << i;
		}
		cout << endl;
	}
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	 printRepeatingRowNumbers(n);

	return 0;
}