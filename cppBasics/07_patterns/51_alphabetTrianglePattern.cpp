/*
Write a C++ program to print an alphabet triangle pattern.

➤ Input:
An integer `n` representing the number of rows.

➤ Output Pattern (for n = 5):

A  
AB  
ABC  
ABCD  
ABCDE  

➤ Pattern Rule:
- The pattern has `n` rows.
- Each row `i` prints first `i` capital letters starting from 'A'.
- Characters are printed in a continuous horizontal sequence per row.

➤ Method 1: Use nested loops in `main()`.
➤ Method 2: Define and use `printAlphabetTriangle(int n)` function.
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

	for(int i=65; i<n+65; i++) {
		for(int j=65; j<=i; j++) {
			cout << char(j);
		}
		
		cout << endl;
	}
	
	return 0;
}



// -------------------------
// Method 2: Use printAlphabetTriangle(int n) function
// -------------------------

#include<iostream>
using namespace std;

void printAlphabetTriangle(int n) {
    for(int i=65; i<n+65; i++) {
		for(int j=65; j<=i; j++) {
			cout << char(j);
		}
		
		cout << endl;
	}
}
int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	printAlphabetTriangle(n);
	
	return 0;
}