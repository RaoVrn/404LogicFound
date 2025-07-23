/*
❓ Problem: Majority Element

You are given an array `v` of size `n`. Your task is to find the majority element.

📌 A majority element is one that appears more than ⌊n / 2⌋ times in the array.

📥 Input:
- Integer n: the size of the array.
- Array v[]: containing n integers.

📤 Output:
- Return the majority element if it exists.
- If no such element exists, return -1.

🔍 Example:
Input: v = [2, 2, 1, 3, 1, 1, 1, 3, 1]
Output: 1

Explanation:
1 appears 5 times in the array of 9 elements which is more than floor(9/2) = 4.

💡 Constraints:
- 1 <= n <= 10^5
- -10^9 <= v[i] <= 10^9
- Time Limit: 1 second

🧠 Try solving using:
1. Brute force (hash map)
2. Better (using extra space)
3. Optimal (Moore’s Voting Algorithm)
*/



// Method 1: Brute Force
// Time Complexity: O(n^2)
// Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& arr, int n) {
	for(int i=0; i<n; i++) {
	    int count = 0;
	    for(int j=0; j<n; j++) {
	        if(arr[i] == arr[j]) {
	            count++;
	        }
	    }
	    if(count > n/2) return arr[i];
	}
	return -1;
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;

	cout << majorityElement(arr, n);
	
	return 0;
}



//// Method 2: Using Hash Map
// Time Complexity: O(n x log n)
// Space Complexity: O(n)
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& arr, int n) {
	map<int, int> mpp;

	for(int i=0; i<n; i++) {
		mpp[arr[i]]++;
	}

	for(auto it : mpp) {
		if(it.second > n/2) return it.first;
	}

	return -1;
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;

	cout << majorityElement(arr, n);
	
	return 0;
}



// Method 3: Moore’s Voting Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& arr, int n) {
	int count = 0;
	int element;
	
	for(int i=0; i<n; i++) {
	    if(count == 0) {
	        count = 1;
	        element = arr[i];
	    }
	    
	    if(arr[i] == element) count++;
	    else count--;
	}
	
	int count1 = 0;
	for(int i=0; i<n; i++) {
	    if(arr[i] == element) count1++;
	}
	
	if(count1 > n/2) return element;
	else return -1;
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;

	cout << majorityElement(arr, n);
	
	return 0;
}