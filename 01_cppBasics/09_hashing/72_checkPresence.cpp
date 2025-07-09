/*
❖ Problem: Check if Elements Exist in Array

➤ Task:
Given an array and Q queries, for each query number, check if it exists in the array using hashing.

➤ Input:
arr = [1, 2, 3, 3, 2, 1, 5, 12]
queries = [2, 5, 9]

➤ Output:
Yes
Yes
No

➤ Constraints:
- 1 ≤ n, q ≤ 10^5
- 0 ≤ arr[i], query ≤ 10^6

➤ Use Case:
- Fast membership test (like sets in Python)
- Lookup in O(1) average

➤ Tags: Hash Map, Lookup, Membership Check
*/


// Method 1
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n1;
	cout << "Enter the number of elements in the array: ";
	cin >> n1;

	int q[1000001];
	int arr[n1];
	unordered_map<int, int> mpp;

	cout << "Enter the array elements: ";
	for(int i=0; i<n1; i++) {
		cin >> arr[i];
		mpp[arr[i]]++;
	}

	int n2;
	cout << "Enter the number of queries: ";
	cin >> n2;

	cout << "Enter the queries: ";
	for(int i=0; i<n2; i++) {
		cin >> q[i];
	}

	for(int i=0; i<n2; i++) {
	    if(mpp.find(q[i]) != mpp.end()) {
	        cout << "Yes" << endl;
	    } else {
	        cout << "No" << endl;
	    }
	}
}

// Method 2
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cout << "Enter the number of elements in array: ";
	cin >> n;

	vector<int> arr(n);
	unordered_set<int> s;

	for(int i=0; i<n; i++) {
		cin >> arr[i];
		s.insert(arr[i]);
	}

	int q;
	cout << "Enter the number of queries: ";
	cin >> q;

    cout << "Enter the queries: ";
	while(q--) {
		int x;
		cin >> x;
	
		cout << (s.count(x) ? "Yes" : "No") << endl;
	}
	return 0;
}