/*
Problem:
Write a C++ program to check whether a given number is even or odd.

Method 1: 
- Check directly in the main function using the modulus operator.

Method 2:
- Create a function `isEven(int num)` that returns whether the number is even or odd.

Input:
4

Output:
Even

Input:
7

Output:
Odd
*/


// -------------------------
// Method 1: Directly checking in main using the modulus operator
// -------------------------

#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	
	if(num % 2 == 0) {
		cout << "even";
	}
	else {
		cout << "odd";
	}
	
	return 0;
}



// -------------------------
// Method 2: Using a user-defined function to check even or odd
// -------------------------

#include<iostream>
using namespace std;

void isEven(int num) {
	if(num % 2 == 0) {
		cout << "even";
	}
	else {
		cout << "odd";
	}
}

int main() {
	int num;
	cin >> num;

	isEven(num);
	
	return 0;
}