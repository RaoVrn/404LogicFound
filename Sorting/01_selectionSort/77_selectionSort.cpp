/*
📌 Problem 1: Basic Selection Sort

🎯 Goal:
Sort an array of integers in ascending order using selection sort.

🧾 Input:
- First line: Integer n (number of elements)
- Second line: n space-separated integers

🖨️ Output:
- Sorted array in ascending order

🧪 Example:
Input:
6
13 46 24 52 20 9

Output:
9 13 20 24 46 52

📚 Constraints:
- 1 <= n <= 10^3
- -10^6 <= arr[i] <= 10^6

💡 Approach:
Selection sort works by selecting the smallest element from the unsorted part and swapping it with the current element.
*/

#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
	for(int i=0; i<=n-2; i++) {
		int min = i;
		
		for(int j=i; j<n; j++) {
			if(arr[j] < arr[min]) min = j;
		}

		swap(arr[i], arr[min]);
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

	selectionSort(arr, n);
	
	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}
	
	return 0;
}