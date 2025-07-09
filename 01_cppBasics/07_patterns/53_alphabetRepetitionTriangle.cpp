/*
Write a C++ program to print a character repetition triangle pattern.

➤ Input:
An integer `n` representing the number of rows.

➤ Output Pattern (for n = 5):

A  
BB  
CCC  
DDDD  
EEEEE  

➤ Pattern Rule:
- The pattern has `n` rows.
- Each row `i` prints the same character `i` times.
- The character starts from 'A' for the first row and increments by 1 each row.

➤ Method 1: Use nested loops in `main()`.
➤ Method 2: Define and use `printRepetitionAlphabetTriangle(int n)` function.
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
			cout << char(i);
		}
	
		cout << endl;
	}

	return 0;
}


// -------------------------
// Method 2: Use printRepetitionAlphabetTriangle(int n) function
// -------------------------

#include<iostream>
using namespace std;

void printRepetitionAlphabetTriangle(int n) {
    for(int i=65; i<n+65; i++) {
		for(int j=65; j<=i; j++) {
			cout << char(i);
		}
	
		cout << endl;
	}
}
int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	printRepetitionAlphabetTriangle(n);

	return 0;
}