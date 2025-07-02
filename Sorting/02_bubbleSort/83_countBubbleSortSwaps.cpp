/*
📌 Problem 3: Count Number of Swaps in Bubble Sort

🎯 Goal:
Count total number of swaps done during bubble sort.

🧾 Input:
- First line: n
- Second line: n space-separated integers

🖨️ Output:
- Number of swaps

🧪 Example:
Input:
3
3 2 1

Output:
3

💡 Logic:
Add a counter variable and increment on every swap.
*/

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
	int count = 0;
	for(int i=n-1; i>=0; i--) {
		for(int j=0; j<i; j++) {
			if(arr[j] > arr[j+1]) {
				swap(arr[j], arr[j+1]);
				count++;
			}
		}
	}
	cout << count;
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

	return 0;
}