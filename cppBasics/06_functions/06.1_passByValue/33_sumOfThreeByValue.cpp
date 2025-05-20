/*
Problem:
Write a C++ program to calculate the sum of three numbers using a function with pass by value.

➤ Function:
    int sum(int a, int b, int c)

➤ In main():
    - Read 3 numbers from the user.
    - Call the function and print the result.

Input:
Enter three numbers: 10 20 30

Output:
Sum = 60
*/


#include<iostream>
using namespace std;

int sum(int a, int b, int c) {
	int res = a + b + c;
	cout << "Sum of " << a << ", " << b << " and " << c << " is: " << res;
	return res;
}

int main() {
	int a, b, c;
	cout << "Enter 3 numbers: ";
	cin >> a >> b >> c;

	sum(a, b, c);
	return 0;
}