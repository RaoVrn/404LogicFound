/*
Problem:
Write a C++ program to swap two integers using a function that uses pass by value.

➤ Create a function:
    void swap(int a, int b)
    - This function should attempt to swap the values.
    - Print the swapped values inside the function.

➤ In the main function:
    - Take input from user for a and b.
    - Call the function.
    - Print the values of a and b again.

Input:
Enter two numbers: 10 20

Output:
Inside swap function:
a = 20, b = 10
Outside after function call:
a = 10, b = 20

Note:
The original values remain unchanged outside the function.
*/



#include<iostream>
using namespace std;

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	
	cout << "After swapping --- a: " << a << ", b: " << b << endl;
}

int main() {
	int a, b;
	cout << "Enter the value of a and b: ";
	cin >> a >> b;

	swap(a, b);
	cout << "Before swapping --- a: " << a << ", b: " << b << endl;
	
	return 0;
}