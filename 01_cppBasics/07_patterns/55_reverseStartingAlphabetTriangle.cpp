/*
Write a C++ program to print a reverse-starting alphabet triangle pattern.

➤ Input:
An integer `n` representing the number of rows.

➤ Output Pattern (for n = 5):

E  
D E  
C D E  
B C D E  
A B C D E  

➤ Pattern Rule:
- The pattern has `n` rows.
- Row `i` starts with the `(n - i + 1)`-th letter of the alphabet and goes up to 'E'.
- Each row increases in length by 1 character.

➤ Method 1: Use nested loops in `main()`.
➤ Method 2: Define and use `printReverseStartingAlphabetTriangle(int n)` function.
*/

#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	for(int i=n+65-1; i>=65; i--) {
		for(int j=i; j<=n+65-1; j++) {
			cout << char(j) << " ";
		}

		cout << endl;
	}	

	return 0;
}



// -------------------------
// Method 2: Use printReverseStartingAlphabetTriangle(int n) function
// -------------------------

#include<iostream>
using namespace std;

void printReverseStartingAlphabetTriangle(int n) {
    for(int i=n+65-1; i>=65; i--) {
		for(int j=i; j<=n+65-1; j++) {
			cout << char(j) << " ";
		}

		cout << endl;
	}
}
int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	
	printReverseStartingAlphabetTriangle(n);

	return 0;
}