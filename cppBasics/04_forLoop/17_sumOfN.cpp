/*
Write a C++ program to calculate the sum of the first N natural numbers using a for loop.

➤ Take an integer input `N`.
➤ Calculate and print the sum of numbers from 1 to N.

Examples:
Input: 4
Output: 10

Use `cout` for printing.
*/


#include<iostream>
using namespace std;

int main() {
	int n, sum=0;
	cout << "Enter the value of n: ";
	cin >> n;

	for (int i=1; i<=n; i++) {
		sum += i;
	}
	
	cout << "Sum of first " << n << " numbers is: " << sum;
	return 0;
}