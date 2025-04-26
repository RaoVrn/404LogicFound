/*
Problem:
Write a C++ program to find the largest of three given numbers.

Method 1:
- Compare the numbers directly in the main function using if-else statements.
- Hint: Use `if-else` to check which number is greater among a, b, and c.

Method 2:
- Create a function `findLargest(int a, int b, int c)` that returns the largest of the three numbers.

Input: 10 20 15
Output: Largest number is 20

Input: 5 3 2
Output: Largest number is 5
*/



// -------------------------
// Method 1: Directly finding the largest in main using if-else statements
// -------------------------

#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	
	if(a > b && a > c) {
		cout << "a is largest";
	}
	else if(b > a && b > c) {
		cout << "b is largest";
	}
	else {
		cout << "c is largest";
	}

	return 0;
}



// -------------------------
// Method 2: Using a user-defined function to find the largest
// -------------------------

#include<iostream>
using namespace std;

void findLargest(int a, int b, int c) {
	if(a > b && a > c) {
		cout << "a is largest";
	}
	else if(b > a && b > c) {
		cout << "b is largest";
	}
	else {
		cout << "c is largest";
	}
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	
	findLargest(a, b, c);

	return 0;
}