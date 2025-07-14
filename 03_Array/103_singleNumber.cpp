/*
📌 Problem: Find the Unique Number

🎯 Goal:
Find the number that appears only once in an array where every other number appears twice.

🧾 Input:
- First line: Integer n (odd size of array)
- Second line: n space-separated integers

🖨️ Output:
- The unique number that appears only once

🧪 Example:
Input:
5
2 3 5 3 2

Output:
5

📚 Constraints:
- 1 <= n <= 10^5
- Exactly one number occurs once, all others twice

💡 Approach:
Use XOR to cancel out duplicates and find the unique number.
*/



// Method 1: Using XOR
// Time Complexity: O(n)
// Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& arr, int n) {
	int x = 0;
	for(int num : arr) {
		x ^= num;
	}

	return x;
}

int main() {
	int n;
	cout << "Enter the size of array: ";
	cin >> n;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;

	cout << singleNumber(arr, n);

	return 0;
}