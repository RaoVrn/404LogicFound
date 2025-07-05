/*
Q1: Implement Insertion Sort.
You are given an array of integers. Your task is to sort the array in increasing order using insertion sort.
Print the array after sorting.

Input:
n = 5
arr = [4, 3, 2, 10, 12]

Output:
2 3 4 10 12

Constraints:
1 <= n <= 10^5
-10^9 <= arr[i] <= 10^9

This is a standard implementation problem to understand the insertion sort mechanism.
*/


#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
	for(int i=0; i<n; i++) {
		int j=i;
		while(j>0 && arr[j-1] > arr[j]) {
			swap(arr[j-1], arr[j]);
			j--;
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