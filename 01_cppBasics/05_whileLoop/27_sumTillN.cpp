/*
Write a C++ program to calculate the sum of first N natural numbers using a while loop.

➤ Take an integer input `N`.
➤ Print the total sum from 1 to N.

Example:
Input: 5
Output: 15

Use `cout` for printing.
*/


#include<iostream>
using namespace std;

int main() {
	int num, sum=0;
	cout << "Enter the number: ";
	cin >> num;

	int i=1;
	while (i<=num) {
		sum += i;
		i++;
	}

	cout << "Sum of first " << num << " numbers is: " << sum;
	return 0;
}