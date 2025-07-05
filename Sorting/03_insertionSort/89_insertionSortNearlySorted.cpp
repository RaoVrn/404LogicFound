/*
You are given an almost sorted array where each element is at most one position away from its correct place.
Use insertion sort logic to sort the array efficiently.

Input:
- N (1 <= N <= 10^5)
- Array of N integers

Output:
- Return the sorted array.

Example:
Input: N = 5, arr = [2, 1, 3, 5, 4]
Output: [1, 2, 3, 4, 5]
*/


//Method 1: using normal array
#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
	for(int i=1; i<n; i++) {
	    if(arr[i] < arr[i-1]) {
	        swap(arr[i], arr[i-1]);
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

	insertionSort(arr, n);

	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}



// Method 2: Using vector
#include<bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int>& arr, int n) {
	for(int i=1; i<n; i++) {
	    if(arr[i] < arr[i-1]) {
	        swap(arr[i], arr[i-1]);
	    }
	}
	return arr;
}

int main() {
	int n;
	cout << "Enter the size of array: ";
	cin >> n;
	
	vector<int> arr(n);
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}

	vector<int> sorted = insertionSort(arr, n);

	for(int i=0; i<n; i++) {
		cout << sorted[i] << " ";
	}

	return 0;
}