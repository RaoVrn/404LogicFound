/*
Write a C++ program to print numbers from 1 to N using a while loop.

➤ Take an integer input `N`.
➤ Print numbers from 1 to N on the same line separated by space.

Example:
Input: 5
Output: 1 2 3 4 5

Use `cout` for printing.
*/

#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter the number: ";
	cin >> num;

	int i=1;
	while(i<=num) {
		cout << i << " ";
		i++;
	}
	
	return 0;
}