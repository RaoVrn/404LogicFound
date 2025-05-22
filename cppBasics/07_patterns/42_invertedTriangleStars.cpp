/*
Write a C++ program to print an inverted triangle pattern of stars `*`.

➤ Input:
An integer `n` representing the number of rows.

➤ Output Pattern (for n = 5):

*****
****
***
**
*

➤ Method 1: Directly in `main()`.
➤ Method 2: Use a function `printInvertedTriangle(int n)`.
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

	for(int i=n; i>0; i--) {
		for(int j=i; j>0; j--) {
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

void printInvertedTriangle(int n) {
	for(int i=n; i>0; i--) {
		for(int j=i; j>0; j--) {
			cout << "*";
		}
		cout << endl;
	}
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	printInvertedTriangle(n);

	return 0;
}