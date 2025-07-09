/*
Write a C++ program to print a star pattern in the shape of the capital letter 'H'.

➤ Input:
An integer `n` representing the width of the arms (e.g., n = 4)

➤ Output Pattern (for n = 4):

********
*      *
*      *
*      *
*      *
********

➤ Pattern Rules:
- First and last rows are filled with `2n` stars.
- Middle rows have one star at start and one at `2n`th position.
- The number of rows = `2n + 1`.

➤ Method 1: Use nested loops in `main()`.
➤ Method 2: Define and use `printHStarPattern(int n)` function.
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

	for(int i=n; i>=n; i--) {
 		for(int j=1; j<=i; j++) {
			cout << "*";
		}
	
		for(int j=1; j<=i; j++) {
			cout << "*";
		}
	
		cout << endl;
	}
	
	for(int i=2*n-1; i>1; i--) {
	    cout << "*";
	    
	    for(int j=1; j<=2*(n-1); j++) {
	        cout << " ";
	    }
	    
	    cout << "*";
	    
	    cout << endl;
	}
	
	for(int i=n; i>=n; i--) {
 		for(int j=1; j<=i; j++) {
			cout << "*";
		}
	
		for(int j=1; j<=i; j++) {
			cout << "*";
		}
	
		cout << endl;
	}

	return 0;
}


// -------------------------
// Method 2: Use printHStarPattern(int n) function
// -------------------------

#include<iostream>
using namespace std;

void printHStarPattern(int n) {
    for(int i=n; i>=n; i--) {
 		for(int j=1; j<=i; j++) {
			cout << "*";
		}
	
		for(int j=1; j<=i; j++) {
			cout << "*";
		}
	
		cout << endl;
	}
	
	for(int i=2*n-1; i>1; i--) {
	    cout << "*";
	    
	    for(int j=1; j<=2*(n-1); j++) {
	        cout << " ";
	    }
	    
	    cout << "*";
	    
	    cout << endl;
	}
	
	for(int i=n; i>=n; i--) {
 		for(int j=1; j<=i; j++) {
			cout << "*";
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

	printHStarPattern(n);

	return 0;
}