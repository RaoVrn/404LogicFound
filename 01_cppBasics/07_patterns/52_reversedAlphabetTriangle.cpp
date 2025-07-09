/*
Write a C++ program to print a reversed alphabet triangle pattern.

➤ Input:
An integer `n` representing the number of rows.

➤ Output Pattern (for n = 5):

ABCDE  
ABCD  
ABC  
AB  
A  

➤ Pattern Rule:
- The pattern has `n` rows.
- Each row `i` prints first `(n - i + 1)` capital letters starting from 'A'.
- Characters are printed in a continuous horizontal sequence per row.

➤ Method 1: Use nested loops in `main()`.
➤ Method 2: Define and use `printReversedAlphabetTriangle(int n)` function.
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

	for(int i=65+n; i>=65; i--) {
		for(int j=65; j<i; j++) {
			cout << char(j);
		}
		cout << endl;
	}
	
	return 0;
}


// -------------------------
// Method 2: Use printReversedAlphabetTriangle(int n) function
// -------------------------

#include<iostream>
using namespace std;

void printReversedAlphabetTriangle(int n) {
    for(int i=65+n; i>=65; i--) {
		for(int j=65; j<i; j++) {
			cout << char(j);
		}
		cout << endl;
	}
}
int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	printReversedAlphabetTriangle(n);
	
	return 0;
}
	
	