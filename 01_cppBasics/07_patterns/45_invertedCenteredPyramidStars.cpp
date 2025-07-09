/*
Write a C++ program to print an inverted centered pyramid pattern using stars `*`.

➤ Input:
An integer `n` for the number of rows.

➤ Output Pattern (for n = 5):

*********
 *******
  *****
   ***
    *

➤ Method 1: Nested loops in `main()`.
➤ Method 2: Use `printInvertedCenteredPyramid(int n)` function.
*/


// -------------------------
// Method 1: Logic inside main function
// -------------------------
// [Incrementing the indentation]
// -------------------------

#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	for(int i=n; i>0; i--) {
		for(int j=0; j<n-i; j++) {
			cout << " ";
		}
		
		for(int j=0; j<2*i-1; j++) {
			cout << "*";
		}

		for(int j=0; j<n-i; j++) {
			cout << " ";
		}
		
		cout << endl;
	}
	
	return 0;
}

// -------------------------
// [Decrementing the indentation]
// -------------------------
	
#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	for(int i=0; i<n; i++) {
		for(int j=0; j<i; j++) {
			cout << " ";
		}
		
		for(int j=0; j<(2*n-2*i-1); j++) {
			cout << "*";
		}

		for(int j=0; j<i; j++) {
			cout << " ";
		}
		
		cout << endl;
	}
	
	return 0;
}
	


// -------------------------
// Method 2: Using a function
// -------------------------
// [Incrementing the indentation]
// -------------------------

#include<iostream>
using namespace std;

void printInvertedCenteredPyramid(int n) {
    for(int i=n; i>0; i--) {
    		for(int j=0; j<n-i; j++) {
    			cout << " ";
    		}
    		
    		for(int j=0; j<2*i-1; j++) {
    			cout << "*";
    		}
    
    		for(int j=0; j<n-i; j++) {
    			cout << " ";
    		}
		
		cout << endl;
	}
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	printInvertedCenteredPyramid(n);
	
	return 0;
}
	
	

// -------------------------
// [Decrementing the indentation]
// -------------------------

#include<iostream>
using namespace std;

void printInvertedCenteredPyramid(int n) {
    for(int i=0; i<n; i++) {
		for(int j=0; j<i; j++) {
			cout << " ";
		}
		
		for(int j=0; j<(2*n-2*i-1); j++) {
			cout << "*";
		}

		for(int j=0; j<i; j++) {
			cout << " ";
		}
		
		cout << endl;
    }
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	printInvertedCenteredPyramid(n);
	
	return 0;
}