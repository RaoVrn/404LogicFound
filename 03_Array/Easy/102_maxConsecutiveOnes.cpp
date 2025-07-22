/*
📌 Problem: Maximum Consecutive Ones

🎯 Goal:
Find the maximum number of consecutive 1s in a binary array.

🧾 Input:
- First line: Integer n (size of array)
- Second line: n space-separated integers (each either 0 or 1)

🖨️ Output:
- Maximum count of consecutive 1s

🧪 Example:
Input:
6
1 1 0 1 1 1

Output:
3

📚 Constraints:
- 1 <= n <= 10^5

💡 Approach:
Use a counter to track current streak of 1s and update max when needed.
*/


// Method 1: Using Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;

int consecutiveOnes(vector<int>& arr, int n) {
	int count = 0, maxCount = 0;
	for(int num : arr) {
		if(num == 1) {
			count++;
			maxCount = max(maxCount, count);
		} else {
			count = 0;
		}
	}
	return maxCount;
}

int main() {
	int n;
	cout << "Enter the size of array: ";
	cin >> n;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;

	cout << consecutiveOnes(arr, n);

	return 0;
}