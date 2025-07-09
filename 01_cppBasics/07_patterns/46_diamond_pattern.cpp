/*
Write a C++ program to print a diamond pattern using stars `*`.

➤ Input:
An integer `n` representing the number of rows for the upper half of the diamond (including the middle row).

➤ Output Pattern (for n = 5):

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

➤ Method 1: Nested loops in `main()`.
➤ Method 2: Use `printDiamond(int n)` function.
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
		for(int j=1; j<=n-i; j++) {
			cout << " ";
		}

		for(int j=1; j<=2*i-1; j++) {
			cout << "*";
		}
	
		for(int j=1; j<=n-i; j++) {
			cout << " ";
		}
		
		cout << endl;
	}

	for(int m=n; m>=1; m--) {
		for(int k=1; k<=n-m; k++) {
			cout << " ";
		}

		for(int k=1; k<=2*m-1; k++) {
			cout << "*";
		}

		for(int k=1; k<=n-m; k++) {
			cout << " ";
		}
		
		cout << endl;
	}

	return 0;
}


// -------------------------
// Method 2: Use printDiamond(int n) function
// -------------------------

#include<iostream>
using namespace std;

void printDiamond(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n-i; j++) {
			cout << " ";
		}

		for(int j=1; j<=2*i-1; j++) {
			cout << "*";
		}
	
		for(int j=1; j<=n-i; j++) {
			cout << " ";
		}
		
		cout << endl;
	}

	for(int m=n; m>=1; m--) {
		for(int k=1; k<=n-m; k++) {
			cout << " ";
		}

		for(int k=1; k<=2*m-1; k++) {
			cout << "*";
		}

		for(int k=1; k<=n-m; k++) {
			cout << " ";
		}
		
		cout << endl;
	}
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	printDiamond(n);

	return 0;
}