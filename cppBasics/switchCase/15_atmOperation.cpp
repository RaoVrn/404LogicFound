/*
Design an ATM menu system using switch statements.  
The options are:

1 → Withdraw  
2 → Deposit  
3 → Check Balance  
4 → Exit  

For any other input, print "Invalid option".

✅ Method 1: Implement the switch logic in `main()`  
🔄 Method 2: Create a function `atmAction(int choice)` and call it from `main()`.

Use `cout` for all outputs.
*/


// -------------------------
// Method 1: Using switch-case to implement an ATM menu system
// -------------------------

#include<iostream>
using namespace std;

int main() {
	int choice;

	cout << "Enter you choice: ";
	cin >> choice;
	
	switch(choice) {
		case 1:
			cout << "Withdraw";
			break;
		case 2:
			cout << "Deposite";
			break;
		case 3:
			cout << "Check Balance";
			break;
		case 4:
			cout << "Exit";
			break;
		default:
			cout << "Invalid";
			break;
	}

	return 0;
}



// -------------------------
// Method 2: Using a function to implement an ATM menu system
// -------------------------

#include<iostream>
using namespace std;

void atmAction(int choice) {
	switch(choice) {
		case 1:
			cout << "Withdraw";
			break;
		case 2:
			cout << "Deposite";
			break;
		case 3:
			cout << "Check Balance";
			break;
		case 4:
			cout << "Exit";
			break;
		default:
			cout << "Invalid";
			break;
	}
}

int main() {
	int choice;

	cout << "Enter you choice: ";
	cin >> choice;
	
	atmAction(choice);

	return 0;
}