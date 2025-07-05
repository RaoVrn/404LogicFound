/*
Q2: Count the number of shifts required in Insertion Sort.
You are given an array. You must return the total number of times an element is shifted to the right 
during the sorting process using insertion sort.

Input:
arr = [2, 1, 3, 1, 2]

Output:
4

Explanation:
Shifts: [2, 2, 3, 1, 2] → [1, 2, 3, 1, 2] → [1, 2, 3, 3, 2] → [1, 2, 2, 3, 2] → Total 4 shifts.
*/


#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
    int count=0;
	for(int i=0; i<n; i++) {
		int j=i;
		while(j>0 && arr[j-1] > arr[j]) {
			swap(arr[j-1], arr[j]);
			count++;
			j--;
		}
	}
	cout << count;
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

    int arr[n];
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}

	insertionSort(arr, n);

	return 0;
}