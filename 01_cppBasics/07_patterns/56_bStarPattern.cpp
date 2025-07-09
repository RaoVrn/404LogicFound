/*
Write a C++ program to print a pattern that forms the shape of the letter 'B' using asterisks (*).

➤ Input:
An integer `n` representing the number of rows (should be odd and >= 7 for accurate 'B' shape).

➤ Output Pattern (for n = 11):

***********  
****   ****  
***     ***  
**       **  
*         *  
*         *  
**       **  
***     ***  
****   ****  
***********  

➤ Pattern Rules:
- The pattern forms the uppercase letter 'B'.
- Top, middle, and bottom rows are fully filled.
- Upper and lower curves of 'B' gradually shrink inward.
- The middle vertical bar is aligned.

➤ Method 1: Use nested loops in `main()`.
➤ Method 2: Define and use `printBPattern(int n)` function.
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

	for(int i=n; i>=1; i--) {
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

	return 0;
}


// -------------------------
// Method 2: Use printBPattern(int n) function
// -------------------------

#include<iostream>
using namespace std;

void printBPattern(int n) {
    for(int i=n; i>=1; i--) {
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
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	printBPattern(n);

	return 0;
}