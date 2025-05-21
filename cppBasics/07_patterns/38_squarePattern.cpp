/*
Write a C++ program to print the following square star pattern.

➤ Input:
An integer `n` representing the number of rows (and columns).

➤ Pattern for n = 5:

*****
*****
*****
*****
*****

Use nested `for` loops to solve this.
*/


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