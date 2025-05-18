/*
Problem:
Write a C++ program to input a character and print its ASCII value.

Method 1:
- Take input and print ASCII directly in main.

Method 2:
- Create a function `printAscii(char ch)` that prints the ASCII value.

Input:
A

Output:
65
*/


// -------------------------
// Method 1: Directly taking input and printing ASCII value using cin and cout
// -------------------------

#include<iostream>
using namespace std;

int main() {
	char ch;
	cout << "Enter the character (to find it's ascii value): ";
	cin >> ch;

	cout << "ASCII value of " << ch << " is: " << int(ch) << endl;
	return 0;
}



// -------------------------
// Method 2: Using a user-defined function to print the ASCII value
// -------------------------

#include<iostream>
using namespace std;

void printAscii(char ch) {
	cout << "ASCII value of " << ch << " is: " << int(ch) << endl;
}

int main() {
	char ch;

	cout << "Enter the character(to find it's ascii value): ";
	cin >> ch;
	
	printAscii(ch);
	return 0;
}