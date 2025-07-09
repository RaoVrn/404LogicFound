/*
❖ Problem: Count Subarrays with Sum Zero

➤ Task:
Given an array, count how many subarrays have a sum of 0.

➤ Input:
arr = [1, -1, 2, -2, 3]

➤ Output:
3 (subarrays: [1,-1], [2,-2], [1,-1,2,-2])

➤ Constraints:
- 1 ≤ n ≤ 10^5

➤ Hint:
Use prefix sum + map to count repeats

➤ Tags: Prefix Hashing, Zero Sum, Counting
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

	int k, sum=0, count=0;
	mpp[0] = 1;
	for(int i=0; i<n; i++) {
		sum += arr[i];
		count += mpp[sum];
		mpp[sum]++;
	}
	
	cout << count << endl;
	return 0;
}