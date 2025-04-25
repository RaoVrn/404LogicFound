/*
Problem:
Write a C++ program to swap two numbers without using a third variable.

Method 1:
- Swap using arithmetic operations in main.

Method 2:
- Create `swapNoTemp(int a, int b)` to perform and display the swap.

Input:
10 20

Output:
a = 20  
b = 10
*/



// -------------------------
// Method 1: Directly swapping in main using arithmetic operations
// -------------------------

#include<iostream>
using namespace std;

int main() {
	int a, b;
	
	cout << "Enter the value of a and b: ";
	cin >> a >> b;

	cout << "Ater swapping a becomes: " << b << " and b becomes: " << a << endl;
	return 0;
}



// -------------------------
// Method 2: Using a user-defined function to swap
// -------------------------
// Part-A: Swapping the numbers at `cout`
// -------------------------

#include<iostream>
using namespace std;

void swapNoTemp(int a, int b) {
	cout << "Ater swapping a becomes: " << b << " and b becomes: " << a << endl;
}

int main() {
	int a, b;
	
	cout << "Enter the value of a and b: ";
	cin >> a >> b;

	swapNoTemp(a, b);
	return 0;
}

// -------------------------
// Part-B: swappint the numbers at `function call`
// -------------------------

#include<iostream>
using namespace std;

void swapNoTemp(int a, int b) {
	cout << "Ater swapping a becomes: " << a << " and b becomes: " << b << endl;
}

int main() {
	int a, b;
	
	cout << "Enter the value of a and b: ";
	cin >> a >> b;

	swapNoTemp(b, a);
	return 0;
}