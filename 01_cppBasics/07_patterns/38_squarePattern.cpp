/*
Write a C++ program to print a square star pattern using nested for loops.

➤ Input:
An integer `n` representing the number of rows and columns.

➤ Output Pattern (for n = 5):

*****
*****
*****
*****
*****

Implement the program in two ways:

➤ Method 1: Write the entire logic directly in the `main()` function.
➤ Method 2: Create a function `printSquare(int n)` that takes `n` as input and prints the pattern.
*/


// -------------------------
// Method 1: Directly in main function
// -------------------------

#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
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

void printSquare(int n) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

int main() {
	int n;

	cout << "Enter the value of n: ";
	cin >> n;

    printSquare(n);
    
	return 0;
}