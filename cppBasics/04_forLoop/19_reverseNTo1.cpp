/*
Write a C++ program to print numbers from N to 1 in reverse order using a for loop.

➤ Take an integer input `N`.
➤ Print numbers from N to 1 separated by space.

Examples:
Input: 5
Output: 5 4 3 2 1

Use `cout` for printing.
*/


#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	for (int i=n ; i>=1; i--) {
		cout << i << " ";
	}
	
	return 0;
}