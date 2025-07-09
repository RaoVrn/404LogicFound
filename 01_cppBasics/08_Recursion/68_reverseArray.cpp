/*
❖ Problem: Reverse an Array (Recursion)

➤ Task:
Given an array of integers, write a recursive function to reverse the array in-place.

➤ Input:
An array of size N

➤ Output:
Print the reversed array

➤ Sample Input:
arr = [1, 2, 3, 4, 5]

➤ Sample Output:
5 4 3 2 1

➤ Constraints:
1 <= N <= 10^4

➤ Hint:
Swap elements at start and end, and recurse inward.
*/


// Method 1
#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int l, int r) {
	if(l >= r) return;
	swap(arr[l], arr[r]);
	
	reverseArray(arr, l+1, r-1);
}

int main() {
	int n;
	cout << "Enter the size of array: ";
	cin >> n;

	int arr[n];
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}

	reverseArray(arr, 0, n-1);

	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}
	
	return 0;
}


// Method 2
#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int i, int n) {
	if(i > n/2) return;
	swap(arr[i], arr[n-i-1]);
	
	reverseArray(arr, i+1, n);
}

int main() {
	int n;
	cout << "Enter the size of array: ";
	cin >> n;

	int arr[n];
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}

	reverseArray(arr, 0, n);

	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}
	
	return 0;
}