/*
Problem:
Write a C++ program to calculate the square of a number using pass by value.

➤ Create a function:
    int square(int n)
    - Return the square of the number.

➤ In the main function:
    - Input a number and display its square.

Input:
Enter a number: 6

Output:
Square: 36
*/


#include<iostream>
using namespace std;

int square(int num) {
	int res = num * num;
	cout << "Square of " << num << " is: " << res;
	return res;
}

int main() {
	int num;
	cout << "Enter the number: ";
	cin >> num;

	square(num);
	return 0;
}