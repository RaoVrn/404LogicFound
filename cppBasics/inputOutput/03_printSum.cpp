/*
Problem:
Write a C++ program to take two integers as input from the user and print their sum.

You must solve it using both methods:

Method 1:
- Take input and print sum directly inside main() using cin and cout.

Method 2:
- Create a function named `printSum(int a, int b)` that calculates and prints the sum.
- Read input in main() and pass the values to this function.

Input:
3 5

Output:
8
*/


// -------------------------
// Method 1: Directly taking input and printing the sum using cin and cout
// -------------------------

#include<iostream>
using namespace std;

int main() {
	int num1, num2;

    cout << "Enter two integers: ";
	cin >> num1 >> num2;

	int sum = num1 + num2;

	cout << sum << endl;
	return 0;
}


// -------------------------
// Method 2: Using a user-defined function to print the sum
// -------------------------

#include<iostream>
using namespace std;

void printSum(int num1, int num2) {
	int sum = num1 + num2;
	cout << "The sum of 2 Numbers is: " << sum << endl;
}

int main() {
	int num1, num2;
	cout << "Enter 2 Integers: ";
	cin >> num1 >> num2;
	
	printSum(num1, num2);
	return 0;
}