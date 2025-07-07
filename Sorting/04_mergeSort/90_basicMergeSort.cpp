/*
Q1. Sort an array using Merge Sort
Given an array of integers, sort it in non-decreasing order using the Merge Sort algorithm.

Constraints:
- 1 <= N <= 10^5
- -10^9 <= A[i] <= 10^9

Input: [5, 4, 3, 2, 1]
Output: [1, 2, 3, 4, 5]
*/


#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
	vector<int> temp;

	int left = low, right = mid+1;

	while(left <= mid && right <= high) {
		if(arr[left] <= arr[right]) {
			temp.push_back(arr[left]);
			left++;
		} else {
			temp.push_back(arr[right]);
			right++;
		}
	}

	while(left <= mid) {
		temp.push_back(arr[left++]);
        //temp.push_back(arr[left]);
        // left++;
	}

	while(right <= high) {
		temp.push_back(arr[right++]);
        //temp.push_back(arr[right]);
        // right++;
	}

	for(int i=low; i<=high; i++) {
		arr[i] = temp[i - low];
	}
}

void mergeSort(vector<int>& arr, int low, int high) {
	if(low >= high) return;
	
	int mid = (low+high)/2;
	mergeSort(arr, low, mid);
	mergeSort(arr, mid+1, high);

	merge(arr, low, mid, high);
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	vector<int> arr(n);
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}

	mergeSort(arr, 0, n-1);

	for(int num : arr) {
		cout << num << " ";
	}
	
	return 0;
}