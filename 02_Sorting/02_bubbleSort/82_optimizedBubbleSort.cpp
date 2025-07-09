/*
📌 Problem 2: Optimized Bubble Sort with Early Exit

🎯 Goal:
Improve bubble sort by stopping early if the array is already sorted in a pass.

🧾 Input:
- First line: Integer n
- Second line: n integers

🖨️ Output:
- Sorted array

🧪 Example:
Input:
5
1 2 3 4 5

Output:
1 2 3 4 5 (Only one pass needed)

💡 Optimization:
If no swaps in a full pass, array is sorted — break early.
*/

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
	for(int i=n-1; i>=0; i--) {
	    bool swapped = false;
		for(int j=0; j<i; j++) {
			if(arr[j] > arr[j+1]) {
				swap(arr[j], arr[j+1]);
				swapped = true;
			}
		}
		if(!swapped) break;
	}
}

int main() {
	int n;
	cout << "Enter the size of array: ";
	cin >> n;

	int arr[n];
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}

	bubbleSort(arr, n);

	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}