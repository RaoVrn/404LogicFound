/*
Problem:
Write a C++ program to check whether a number is positive, negative, or zero.

Method 1:
- Check directly in the main function using if-else.

Method 2:
- Create a function `checkSign(int num)` that returns whether the number is positive, negative, or zero.

Input: 5
Output: Positive

Input: -3
Output: Negative

Input: 0
Output: Zero
*/


// -------------------------
// Method 1: Directly checking in main using if-else
// -------------------------

#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	if(num > 0) {
		cout << "positive";
	}
	else if(num < 0) {
		cout << "negative";
	}
	else {
		cout << "zero";
	}

	return 0;
}



// -------------------------
// Method 2: Using a user-defined function to check sign
// -------------------------

#include<iostream>
using namespace std;

void checkSign(int num) {
	if(num > 0) {
		cout << "positive";
	}
	else if(num < 0) {
		cout << "negative";
	}
	else {
		cout << "zero";
	}
}

int main() {
	int num;
	cin >> num;

	checkSign(num);

	return 0;
}
