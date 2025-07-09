/*
Write a C++ program to print a centered pyramid pattern using stars `*`.

➤ Input:
An integer `n` for number of rows.

➤ Output Pattern (for n = 5):

    *    
   ***   
  *****  
 ******* 
*********

➤ Method 1: Use nested loops in `main()`.
➤ Method 2: Use `printCenteredPyramid(int n)` function.
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
		for(int j=0; j<n-i-1; j++) {
			cout << " ";
		}
	
		for(int j=0; j<2*i+1; j++) {
			cout << "*";
		}

		for(int j=0; j<n-i-1; j++) {
			cout << " ";
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

void printCenteredPyramid(int n) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<n-i-1; j++) {
			cout << " ";
		}
	
		for(int j=0; j<2*i+1; j++) {
			cout << "*";
		}

		for(int j=0; j<n-i-1; j++) {
			cout << " ";
		}
		
		cout << endl;
	}
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	printCenteredPyramid(n);

	return 0;
}