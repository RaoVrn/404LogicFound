/*
Q2. Count Inversions
Count the number of inversions in the array using merge sort.
Inversion: A pair (i, j) such that i < j and arr[i] > arr[j]

Example:
Input: [5, 4, 3, 2, 1]
Output: 10
*/


#include<bits/stdc++.h>
using namespace std;

long long mergeAndCount(vector<int>& arr, int low, int mid, int high) {
	vector<int> temp;

	int left = low, right = mid+1;
	long long invCount = 0;
	while(left <= mid && right <= high) {
		if(arr[left] <= arr[right]) {
			temp.push_back(arr[left]);
			left++;
		} else {
			temp.push_back(arr[right]);
			right++;
			invCount += (mid - left + 1);
		}
	}
	
	while(left <= mid) {
		temp.push_back(arr[left++]);
	}

	while(right <= high) {
		temp.push_back(arr[right++]);
	}

	for(int i=low; i<=high; i++) {
		arr[i] = temp[i-low];
	}

	return invCount;
}

long long mergeSortAndCount(vector<int>& arr, int low, int high) {
	if(low >= high) return 0;

	int mid = (low + high) / 2;

	long long inv = 0;
	inv += mergeSortAndCount(arr, low, mid);
	inv += mergeSortAndCount(arr, mid+1, high);
	inv += mergeAndCount(arr, low, mid, high);
	
	return inv;
}

int main() {
	int n;
	cout << "Enter the size of array: ";
	cin >> n;

	vector<int> arr(n);

	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}

	long long inv = mergeSortAndCount(arr, 0, n-1);

    cout << endl << "Sorted Array: ";
	for(int num : arr) {
		cout << num << " ";
	}
	
	cout << endl;
	cout << "Total Inversion: " << inv << " " << endl;

	return 0;
}