/*
Problem:
Write a C++ program to swap two numbers using pass by reference.

➤ Create a function:
    void swap(int &a, int &b)

➤ In main():
    - Input two numbers.
    - Call swap and print the result.

Input:
Enter two numbers: 5 9

Output:
After swapping:
a = 9
b = 5
*/


#include<iostream>
using namespace std;

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "After Swapping " << endl << "a = " << a << endl << "b = " << b << endl;
}

int main() {
	int a, b;
	cout << "Enter 2 numbers: ";
	cin >> a >> b;

	swap(a, b);
	return 0;
}