/*
Write a C++ program to print all Armstrong numbers from 1 to N using a for loop.

➤ Take an integer input `N`.
➤ Print all Armstrong numbers between 1 and N separated by space.

Examples:
Input: 500
Output: 1 153 370 371 407

Use `cout` for printing.
*/


#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int num;
	cout << "Enter the number: ";
	cin >> num;

	for (int i=1; i<=num; i++) {
		int temp=i, digits=0;
		
		for (int t=temp; t>=1; t /= 10) {
			digits++;
		}
		
		int sum=0;
		
		for (int t=i; t>=1; t /= 10) {
			int digit = t % 10;
			sum += pow(digit, digits) ;
		}
		
		if (sum == i) {
			cout << i << " ";
		}
	}
	
	return 0;
}