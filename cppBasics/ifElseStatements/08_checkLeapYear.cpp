/*
Problem:
Write a C++ program to check whether a given year is a leap year or not.

Method 1:
- Check directly in the main function using the leap year formula.
- Hint: A year is a leap year if:
  1. It is divisible by 4
  2. It is not divisible by 100, unless divisible by 400.

Method 2:
- Create a function `isLeapYear(int year)` to check if the year is a leap year.



Input: 2024
Output: Leap year

Input: 2023
Output: Not a leap year
*/



// -------------------------
// Method 1: Directly checking in main using the leap year formula
// -------------------------

#include<iostream>
using namespace std;

int main() {
	int year;
	cin >> year;

	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		cout << "leap year";
	}
	else {
		cout << "not a leap year";
	}
	
	return 0;
}



// -------------------------
// Method 2: Using a user-defined function to check leap year
// -------------------------

#include<iostream>
using namespace std;

void isLeapYear(int year) {
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		cout << year << " is a leap year" << endl;
	}
	else {
		cout << year << " is not a leap year" << endl;
	}
}

int main() {
	int year;

    cout << "Enter the year: ";
 	cin >> year;
	isLeapYear(year);
	
	return 0;
}
	