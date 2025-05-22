/*
Write a C++ program to print a right-angled triangle pattern using stars `*`.

➤ Input:
An integer `n` representing the number of rows.

➤ Output Pattern (for n = 5):

*
**
***
****
*****

➤ Method 1: Logic inside `main()`.
➤ Method 2: Use a function `printRightTriangle(int n)`.
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

	for(int i=0; i<n; i++) {
		for(int j=0; j<=i; j++) {
			cout << "*";
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

void printRightTriangle(int n) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<=i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	printRightTriangle(n);

	return 0;
}