/*
Write a simple calculator that takes two integers and an operator (`+`, `-`, `*`, `/`, `%`) as input and prints the result.

➤ For invalid operators, print "Invalid operator".  
➤ For division/modulus by zero, print "Division by zero".

✅ Method 1: Write the entire switch logic directly inside `main()`  
🔄 Method 2: Create a function `calculate(a, b, op)` that contains the switch logic and call it from `main()`.

Examples:
Input: 5 3 +
Output: 8

Input: 4 0 /
Output: Division by zero

Use `cout` for printing.

*/



// -------------------------
// Method 1: Using switch-case to implement a simple calculator
// -------------------------

#include<iostream>
using namespace std;

int main() {
	float a, b;
	char op;

	cout << "Enter the value of 'a' and 'b': ";
	cin >> a >> b;

	cout << "Enter the operation to perform: ";
	cin >> op;

	switch(op) {
		case '+':
			cout << a + b;
			break;
		case '-':
			cout << a - b;
			break;
		case '%':
			cout << int(a) % int(b);
			break;
		case '*':
			cout << a * b;
			break;
		case '/':
			cout << a / b;
			break;
		default:
			cout << "Invalid";
	}

	return 0;
}


// -------------------------
// Method 2: Using a function to implement a simple calculator
// -------------------------

#include<iostream>
using namespace std;

void calculate(float a,float b,char op) {
	switch(op) {
		case '+':
			cout << a + b;
			break;
		case '-':
			cout << a - b;
			break;
		case '%':
			cout << int(a) % int(b);
			break;
		case '*':
			cout << a * b;
			break;
		case '/':
			cout << a / b;
			break;
		default:
			cout << "Invalid";
	}
}

int main() {
	float a, b;
	char op;

	cout << "Enter the value of 'a' and 'b': ";
	cin >> a >> b;

	cout << "Enter the operation to perform: ";
	cin >> op;

	calculate(a, b, op);

	return 0;
}
