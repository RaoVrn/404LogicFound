/*
Problem:
Write a C++ program to increment a number using a reference.

➤ Function:
    void increment(int &n)

➤ In main():
    - Read an integer.
    - Call increment and print the value after update.

Input:
Enter a number: 7

Output:
After increment: 8
*/


#include<iostream>
using namespace std;

void increment(int &n) {
	n++;
	cout << "After increment: " << n;
}

int main() {
	int n;
	cout << "Enter the number: ";
	cin >> n;

	increment(n);
}