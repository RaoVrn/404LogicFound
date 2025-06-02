/*
Write a C++ program to print a star pattern in the shape of the letter 'K'.

➤ Input:
An integer `n` representing the number of rows (e.g., n = 9)

➤ Output Pattern (for n = 9):

*       *  
**     **  
***   ***  
**** ****  
*********  
**** ****  
***   ***  
**     **  
*       *  

➤ Pattern Rules:
- The pattern forms the capital letter 'K'.
- The left diagonal starts from top-left and increases in stars.
- The right diagonal starts from top-right and decreases, forming a mirror.

➤ Method 1: Use nested loops in `main()`.
➤ Method 2: Define and use `printKPattern(int n)` function.
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

	for(int k=1; k<=n; k++) {
		for(int l=1; l<=k; l++) {
			cout << "*";
		}

		for(int l=1; l<=2*(n-k); l++) {
			cout << " ";
		}

		for(int l=1; l<=k; l++) {
			cout << "*";
		}
	
		cout << endl;
	}
	
	for(int i=n-1; i>=1; i--) {
		for(int j=1; j<=i; j++) {
			cout << "*";
		}

		for(int j=1; j<=2*(n-i); j++) {
			cout << " ";
		}

		for(int j=1; j<=i; j++) {
			cout << "*";
		}
		
		cout << endl;
	}

	return 0;
}



// -------------------------
// Method 2: Use printKPattern(int n) function
// -------------------------

#include<iostream>
using namespace std;

void printBPattern(int n) {
	for(int k=1; k<=n; k++) {
		for(int l=1; l<=k; l++) {
			cout << "*";
		}

		for(int l=1; l<=2*(n-k); l++) {
			cout << " ";
		}

		for(int l=1; l<=k; l++) {
			cout << "*";
		}
	
		cout << endl;
	}
	
	for(int i=n-1; i>=1; i--) {
		for(int j=1; j<=i; j++) {
			cout << "*";
		}

		for(int j=1; j<=2*(n-i); j++) {
			cout << " ";
		}

		for(int j=1; j<=i; j++) {
			cout << "*";
		}
		
		cout << endl;
	}
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	printBPattern(n);

	return 0;
}