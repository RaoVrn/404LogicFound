/*
Problem:
Write a C++ program to input marks and print the grade based on the following criteria:

Grade A if marks >= 90
Grade B if marks >= 70
Grade C if marks >= 50
Grade D if marks >= 35
Fail otherwise

Method 1:
- Directly implement the grading logic in the main function.

Method 2:
- Create a function `determineGrade(int marks)` that returns the grade.

Input: 95
Output: Grade A

Input: 14
Output: Fail
*/


// -------------------------
// Method 1: Directly implementing grading logic in main
// -------------------------

#include<iostream>
using namespace std;

int main() {
	int marks;
	cin >> marks;

	if(marks >=90) {
		cout << "Grade A";
	}
	else if(marks >= 70) {
		cout << "Grade B";
	}
	else if(marks >= 50) {
		cout << "Grade C";
	}
	else if(marks >= 35) {
		cout << "Grade D";
	}
	else {
		cout << "Fail";
	}

	return 0;
}



// -------------------------
// Method 2: Using a user-defined function to determine grade
// -------------------------

#include<iostream>
using namespace std;

void determineGrade(int marks) {
	if(marks >=90) {
		cout << "Grade A";
	}
	else if(marks >= 70) {
		cout << "Grade B";
	}
	else if(marks >= 50) {
		cout << "Grade C";
	}
	else if(marks >= 35) {
		cout << "Grade D";
	}
	else {
		cout << "Fail";
	}
}

int main() {
	int marks;
	cin >> marks;

	determineGrade(marks);

	return 0;
}