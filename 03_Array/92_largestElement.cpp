/*
📌 Problem: Largest Element in an Array

🎯 Goal:
Find the largest integer in a given array.

🧾 Input:
- First line: Integer n (number of elements)
- Second line: n space-separated integers (array elements)

🖨️ Output:
- A single integer representing the largest element

🧪 Example:
Input:
5
2 8 1 4 3

Output:
8

📚 Constraints:
- 1 <= n <= 10^3
- -10^6 <= arr[i] <= 10^6

💡 Approach:
Iterate through the array while maintaining a variable to track the maximum value encountered.
*/

#include<bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int n) {
	int max = 0;
	for(int i=1; i<n; i++) {
		if(arr[max] < arr[i]) {
			max = i;
		}
	}
	return arr[max];
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	int arr[n];
	for(int i=0; i<n; i++) {
	    cin >> arr[i];
	}
	cout << largestElement(arr, n);

	return 0;
}