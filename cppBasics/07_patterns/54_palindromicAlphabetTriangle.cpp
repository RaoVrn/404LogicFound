/*
Write a C++ program to print a palindromic alphabet triangle pattern.

➤ Input:
An integer `n` representing the number of rows.

➤ Output Pattern (for n = 4):

A  
ABA  
ABCBA  
ABCDCBA  

➤ Pattern Rule:
- The pattern has `n` rows.
- Each row `i` consists of:
  - Increasing characters from 'A' to the `i-th` letter.
  - Then decreasing characters back to 'A', excluding the middle character to avoid duplication.

➤ Method 1: Use nested loops in `main()`.
➤ Method 2: Define and use `printPalindromicAlphabetTriangle(int n)` function.
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
		for(int j=65; j<(n-i)+65; j++) {
			cout << " ";
		}

		for(int j=65; j<=i; j++) {
			cout << char(j);
		}

		for(int j=i-1; j>=65; j--) {
			cout << char(j);
		}
		
		for(int j=65; j<(n-i)+65; j++) {
			cout << " ";
		}
		
		cout << endl;
	}

	return 0;
}


// -------------------------
// Method 2: Use printPalindromicAlphabetTriangle(int n) function
// -------------------------

#include<iostream>
using namespace std;

void printPalindromicAlphabetTriangle(int n) {
    for(int i=65; i<n+65; i++) {
		for(int j=65; j<(n-i)+65; j++) {
			cout << " ";
		}

		for(int j=65; j<=i; j++) {
			cout << char(j);
		}

		for(int j=i-1; j>=65; j--) {
			cout << char(j);
		}
		
		for(int j=65; j<(n-i)+65; j++) {
			cout << " ";
		}
		
		cout << endl;
	}
}
int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	printPalindromicAlphabetTriangle(n);

	return 0;
}
