/*
❖ Problem: Most Frequent Element in a Subarray [L, R]

➤ Task:
Given an array and a range L to R, find the element that occurs the most in that subarray.

➤ Input:
arr = [1, 2, 2, 3, 1, 3, 3]
L = 1, R = 5

➤ Output:
3 (or 2, if same frequency)

➤ Constraints:
- 1 ≤ n ≤ 10^4
- 0 ≤ L ≤ R < n

➤ Hint:
Use unordered_map to count frequency in subarray arr[L:R]

➤ Tags: Hash Map, Range Query, Frequency
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
		mpp[arr[i]]++;
	}

	int l, r;
	cout << "Enter the value of l and r: ";
	cin >> l >> r;

	int maxFreq = 0, maxElem = -1;
	
	for(auto &[key, val]: mpp) {
		for(int i=l; i<=r; i++)	{
			if(val > maxFreq) {
				maxFreq = val;
				maxElem = key;
			}
		}
	}

	cout << maxElem;
	return 0;
}
