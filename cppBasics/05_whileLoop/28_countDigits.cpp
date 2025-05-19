/*
Write a C++ program to count the number of digits in a number using a while loop.

➤ Take an integer input `N`.
➤ Print the total number of digits in the number.

Example:
Input: 12345
Output: 5

Use `cout` for printing.
*/


#include<iostream>
using namespace std;

int main() {
	int num, digits=0;
	cout << "Enter the number: ";
	cin >> num;

	int i=num;
	while (i>=1) {
		i /= 10;
		digits++;
	}

	cout << "Number of digits in " << num << " are: " << digits;
	return 0;
}