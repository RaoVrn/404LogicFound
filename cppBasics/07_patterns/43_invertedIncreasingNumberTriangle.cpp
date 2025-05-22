/*
Write a C++ program to print a pattern where numbers increase from 1 but rows decrease in length.

➤ Input:
An integer `n` representing the number of rows.

➤ Output Pattern (for n = 5):

12345
1234
123
12
1

➤ Method 1: Direct logic in `main()`.
➤ Method 2: Create `printInvertedIncreasingNumbers(int n)` function.
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

	for(int i=n; i>0; i--) {
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

void printInvertedIncreasingNumbers(int n) {
	for(int i=n; i>0; i--) {
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

	printInvertedIncreasingNumbers(n);

	return 0;
}
