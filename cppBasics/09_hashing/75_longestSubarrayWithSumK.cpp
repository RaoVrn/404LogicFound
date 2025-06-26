/*
❖ Problem: Longest Subarray with Sum K

➤ Task:
Given an array of integers and an integer K, find the length of the longest subarray that sums to K.

➤ Input:
arr = [1, 2, 3, 1, 1, 1, 1]
K = 3

➤ Output:
3 (subarray: [1, 1, 1])

➤ Constraints:
- 1 ≤ n ≤ 10^5
- -10^9 ≤ a[i] ≤ 10^9

➤ Hint:
Use prefix sum + hash map to store first occurrence of sum

➤ Tags: Prefix Sum, Hashing, Sliding Window
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cout << "Enter the number of elements in the array: ";
	cin >> n;

	int arr[n];
	unordered_map<int, int> mpp;
	
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}

	int k;
	cout << "Enter the value of k: ";
	cin >> k;

	int sum=0, maxLen=0;
	
	for(int i=0; i<n; i++) {
		sum += arr[i];

		if(sum == k) maxLen = i+1;

		if(mpp.find(sum-k) != mpp.end()) {
			maxLen = max(maxLen, i-mpp[sum-k]);
		}

		if(mpp.find(sum) == mpp.end()) {
			mpp[sum] = i;
		}
	}

	cout << maxLen;
	return 0;
}