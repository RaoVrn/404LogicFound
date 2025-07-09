/*
Problem:
Write a C++ program to reverse an array using pass by reference.

➤ Function:
    void reverseArray(int arr[], int size)

➤ In main():
    - Read size and elements.
    - Reverse and print the array.

Input:
Enter size: 5
Enter elements: 1 2 3 4 5

Output:
Reversed array: 5 4 3 2 1
*/


#include<iostream>
using namespace std;

void reverseArray(int arr[], int size) {
	for(int i=size-; i>=0; i--) {
		cout << arr[i] << " ";
	}
}

int main() {
	int size;
	cout << "Enter the size of arr: ";
	cin >> size;
	
	int arr[size];
	cout << "Enter the array: ";
	for(int i=0; i<size; i++) {
		cin >> arr[i];
	}

	reverseArray(arr, size);
	return 0;
}