/*
Given an integer `day` denoting the day number (1 to 7), print the day of the week. The week starts from Monday (1) to Sunday (7).  
If the number is outside this range (i.e., less than 1 or greater than 7), print "Invalid".

Ensure only the first letter of the answer is capitalised.

Use:
- C++: cout << variable_name;

Examples:
Input: day = 3  
Output: Wednesday

Input: day = 8  
Output: Invalid
*/


// -------------------------
// Method 1: Using switch-case to determine the day of the week
// -------------------------

#include<iostream>
using namespace std;

int main() {
	int day;
	cin >> day;
	
	switch(day) {
		case 1:
			cout << "Monday";
			break;
		case 2:
			cout << "Tuesday";
			break;
		case 3:
			cout << "Wednesday";
			break;
		case 4:
			cout << "Thursday";
			break;
		case 5:
			cout << "Friday";
			break;
		case 6:
			cout << "Saturday";
			break;
		case 7:
			cout << "Sunday";
			break;
		default:
			cout << "Invalid";
			break;
	}
	
	return 0;
}


		
// -------------------------
// Method 2: Using if-else statements to determine the day of the week
// -------------------------

#include<iostream>
using namespace std;

void WhichWeekDay(int day) {
	switch(day) {
		case 1:
			cout << "Monday";
			break;
		case 2:
			cout << "Tuesday";
			break;
		case 3:
			cout << "Wednesday";
			break;
		case 4:
			cout << "Thursday";
			break;
		case 5:
			cout << "Friday";
			break;
		case 6:
			cout << "Saturday";
			break;
		case 7:
			cout << "Sunday";
			break;
		default:
			cout << "Invalid";
			break;
	}
}
int main() {
	int day;
	cin >> day;
	
	WhichWeekDay(day);
	
	return 0;
}