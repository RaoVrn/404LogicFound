/*
❖ Problem: Count Frequencies of Array Elements

➤ Task:
Given an array of N integers, count the frequency of each distinct element using:
1. Hash array (if values ≤ 10^6)
2. unordered_map (generic)

➤ Input:
n = 8
arr = [1, 2, 3, 3, 2, 1, 5, 12]

➤ Output:
1 -> 2
2 -> 2
3 -> 2
5 -> 1
12 -> 1

➤ Constraints:
- 1 ≤ n ≤ 10^5
- 0 ≤ arr[i] ≤ 10^6 (for hash array)

➤ Use Case:
- Useful for counting word frequency, vote counting, etc.

➤ Tags: Hashing, Frequency Map, Counting
*/


// Method 1: Using Hash Array
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	int arr[100001];
	int hash[1000001] = {0};

	for(int i=0; i<n; i++) {
		cin >> arr[i];
		hash[arr[i]]++;
	}

	for(int i=0; i<1000000; i++) {
		if(hash[i] > 0) {
			cout << i << "->" << hash[i] << endl;
		}
	}

	return 0;
}


// Method 2: Using unordered_map
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	int arr[100001];
	unordered_map<int, int> mpp;

	for(int i=0; i<n; i++) {
		cin >> arr[i];
		mpp[arr[i]]++;
	}

	for(auto &it : mpp) {
		cout << it.first << "->" << it.second << endl;
	}

	return 0;
}