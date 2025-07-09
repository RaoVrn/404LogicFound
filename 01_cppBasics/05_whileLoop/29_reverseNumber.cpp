/*
Write a C++ program to reverse a number using a while loop.

➤ Take an integer input `N`.
➤ Reverse the number and print it.

Example:
Input: 1234
Output: 4321

Use `cout` for printing.
*/

#include<iostream>
using namespace std;

int main() {
	int num, reverse=0;
	cout << "Enter the number: ";
	cin >> num;

	while(num>=1) {
		int digit = num % 10;
		reverse = reverse * 10 + digit;
		num /= 10;
	}
	cout << reverse;
	
	return 0;
}