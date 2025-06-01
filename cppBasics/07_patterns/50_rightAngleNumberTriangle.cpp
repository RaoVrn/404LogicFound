/*
Write a C++ program to print a right-angle triangle of consecutive numbers.

➤ Input:
An integer `n` representing the number of rows.

➤ Output Pattern (for n = 5):

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

➤ Pattern Rule:
- The pattern has `n` rows.
- Numbers increment consecutively from 1.
- Each row `i` contains `i` numbers.

➤ Method 1: Use nested loops in `main()`.
➤ Method 2: Define and use `printTriangle(int n)` function.
*/


// -------------------------
// Method 1: Logic inside main function
// -------------------------

#include<iostream>
using namespace std;

int main() {
	int n, num=1;
	cout << "Enter the value of n: ";
	cin >> n;

	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++) {
			cout << num++ << " ";
		}
		
		cout << endl;
	}
	
	return 0;
}



// -------------------------
// Method 2: Use printTriangle(int n) function
// -------------------------

#include<iostream>
using namespace std;

void printTriangle(int n, int num) {
    for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++) {
			cout << num++ << " ";
		}
		
		cout << endl;
	}
}

int main() {
	int n, num=1;
	cout << "Enter the value of n: ";
	cin >> n;

	printTriangle(n, num);
	
	return 0;
}