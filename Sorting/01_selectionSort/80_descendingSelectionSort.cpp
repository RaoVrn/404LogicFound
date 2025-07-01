/*
📌 Problem 4: Selection Sort in Descending Order

🎯 Goal:
Sort an array using selection sort but in descending order

🧾 Input:
- n elements

🖨️ Output:
- Sorted array in descending order

🧪 Example:
Input:
6
13 46 24 52 20 9

Output:
52 46 24 20 13 9
*/

#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
	for(int i=0; i<n-1; i++) {
		int min = i;
		for(int j=i; j<n; j++) {
			if(arr[j] < arr[min])
				min = j;
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

	for(int i=n-1; i>=0; i--) {
		cout << arr[i] << " ";
	}

	return 0;
}