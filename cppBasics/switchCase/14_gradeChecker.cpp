/*
Take a character input representing a grade (`A`, `B`, `C`, `D`, `F`) and print:

A → Excellent  
B → Very Good  
C → Good  
D → Pass  
F → Fail  

For any other character, print "Invalid grade".

✅ Method 1: Write the switch logic directly inside `main()`  
🔄 Method 2: Create a function `printGradeRemarks(char grade)` and call it from `main()`.

Use `cout` for output.
*/


// -------------------------
// Method 1: Using switch-case to determine the grade remarks
// -------------------------

#include<iostream>
using namespace std;

int main() {
	char g;
	cout << "Enter the grade: ";
	cin >> g;

	switch(g) {
		case 'A':
			cout << "Excellent";
			break;
		case 'B':
			cout << "Very Good";
			break;
		case 'C':
			cout << "Good";
			break;
		case 'D':
			cout << "Pass";
			break;
		case 'F':
			cout << "Fail";
			break;
		default:
			cout << "Invalid";
			break;
	}
	
	return 0;
}



// -------------------------
// Method 2: Using if-else statements to determine the grade remarks
// -------------------------

#include<iostream>
using namespace std;

void grade(char g) {
	switch(g) {
		case 'A':
			cout << "Excellent";
			break;
		case 'B':
			cout << "Very Good";
			break;
		case 'C':
			cout << "Good";
			break;
		case 'D':
			cout << "Pass";
			break;
		case 'F':
			cout << "Fail";
			break;
		default:
			cout << "Invalid";
			break;
	}
}

int main() {
	char g;
	cout << "Enter the grade: ";
	cin >> g;

	grade(g);
	
	return 0;
}
