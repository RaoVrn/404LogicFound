/*
📌 Problem: Find the Union of Two Arrays

🎯 Goal:
Return the union of two arrays (distinct elements only).

🧾 Input:
- First line: Integers n and m
- Second line: n space-separated integers
- Third line: m space-separated integers

🖨️ Output:
- Union of both arrays in sorted order

🧪 Example:
Input:
5 5
1 2 4 5 6
2 3 5 7 8

Output:
1 2 3 4 5 6 7 8

📚 Constraints:
- 1 <= n, m <= 10^5
- Elements may or may not be sorted

💡 Approach:
Use a set to store unique elements from both arrays, then print sorted result.
*/

// Method: Using a set to find the union of two arrays
// Time Complexity: O(n + m)
// Space Complexity: O(n + m)
#include<bits/stdc++.h>
using namespace std;

void unionOfArrays(vector<int>& arr1, vector<int>& arr2, int n, int m) {
	set<int> s;

	for(auto x : arr1) s.insert(x);
	for(auto x : arr2) s.insert(x);

	for(int x : s) cout << x << " ";
}

int main() {
	int n, m;
	cout << "Enter the size of arrays n and m: ";
	cin >> n >> m;

	vector<int> arr1(n);
	for(int &it : arr1) cin >> it;

	vector<int> arr2(n);
	for(int &it : arr2) cin >> it;

	unionOfArrays(arr1, arr2, n, m);

	return 0;
}