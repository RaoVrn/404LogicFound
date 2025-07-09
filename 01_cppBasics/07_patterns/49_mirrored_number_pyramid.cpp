/*
Write a C++ program to print a mirrored number pyramid pattern.

➤ Input:
An integer `n` representing the number of rows.

➤ Output Pattern (for n = 4):

1      1
12    21
123  321
12344321

➤ Pattern Rule:
- The pattern has `n` rows.
- For each row `i`:
  - Print numbers from `1` to `i`.
  - Print spaces: `2 * (n - i)` spaces in between.
  - Print numbers from `i` to `1`.
- In the last row, there is no space between the left and right sides.

➤ Method 1: Use nested loops in `main()`.
➤ Method 2: Define and use `printMirroredPyramid(int n)` function.
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
		for(int j=1; j<=i; j++)	{ 
			cout << j;
		}

		for(int k=1; k<=2*(n-i); k++) {
			cout << " ";
		}

		for(int j=i; j>=1; j--) {
			cout << j;
		}

		cout << endl;
	}

	return 0;
}


// -------------------------
// Method 2: Use printMirroredPyramid(int n) function
// -------------------------

#include<iostream>
using namespace std;

void printMirroredPyramid(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++)	{ 
			cout << j;
		}

		for(int k=1; k<=2*(n-i); k++) {
			cout << " ";
		}

		for(int j=i; j>=1; j--) {
			cout << j;
		}

		cout << endl;
	}
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	printMirroredPyramid(n);

	return 0;
}