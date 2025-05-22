/*
Write a C++ program to print a triangle where each row contains increasing numbers starting from 1.

➤ Input:
An integer `n` representing the number of rows.

➤ Output Pattern (for n = 5):

1
12
123
1234
12345

➤ Method 1: Write in `main()`.
➤ Method 2: Use `printIncreasingNumberTriangle(int n)`.
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
		for(int j=1; j<=i; j++) {
			cout << j;
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

void printIncreasingNumberTriangle(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++) {
			cout << j;
		}
		cout << endl;
	}
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	
	printIncreasingNumberTriangle(n);

	return 0;
}
