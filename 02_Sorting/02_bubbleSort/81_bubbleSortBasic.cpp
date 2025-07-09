/*
📌 Problem 1: Basic Bubble Sort

🎯 Goal:
Sort an array of integers using the bubble sort algorithm in ascending order.

🧾 Input:
- First line: Integer n
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

💡 Bubble Sort Logic:
- Compare adjacent pairs and swap if needed.
- Pushes largest element to the end in each pass.
*/


// Method 1: Using swap() method
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    int temp = 0;
	for(int i=n-1; i>=0; i--) {
		for(int j=0; j<i; j++) {
			if(arr[j] > arr[j+1]) {
				swap(arr[j], arr[j+1]);
            }
		}
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


// Method 2: Using a temporary variable
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    int temp = 0;
	for(int i=n-1; i>=0; i--) {
		for(int j=0; j<i; j++) {
			if(arr[j] > arr[j+1]) {
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
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