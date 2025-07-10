/*
📌 Problem: Linear Search

🎯 Goal:
Search a given key in the array and return its index or -1 if not found.

🧾 Input:
- First line: Integer n
- Second line: n space-separated integers
- Third line: Integer key

🖨️ Output:
- Index of the key (0-based) if found, else -1

🧪 Example:
Input:
5
10 20 30 40 50
30

Output:
2

📚 Constraints:
- 1 <= n <= 10^5
- -10^9 <= arr[i], key <= 10^9

💡 Approach:
Traverse and compare each element with the key.
*/


// Method: Using a simple loop to search for the key
// Time Complexity: O(n)
// Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>& arr, int n, int key) {
	for(int i=0; i<n; i++) {
		if(key == arr[i]) {
			return i;
		}
	}
	
	return -1;
}

int main() {
	int n, key;
	cout << "Enter the size of array: ";
	cin >> n;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;

	cout << "Enter the size of key: ";
	cin >> key;

	cout << linearSearch(arr, n, key);

	return 0;
}