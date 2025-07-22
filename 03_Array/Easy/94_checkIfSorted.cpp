/*
📌 Problem: Check if the Array is Sorted

🎯 Goal:
Determine whether the given array is sorted in non-decreasing order.

🧾 Input:
- First line: Integer n
- Second line: n space-separated integers

🖨️ Output:
- "Yes" if the array is sorted, "No" otherwise

🧪 Example:
Input:
5
1 2 2 4 5

Output:
Yes

📚 Constraints:
- 1 <= n <= 10^3

💡 Approach:
Check if every element is less than or equal to the next one.
*/

#include<bits/stdc++.h>
using namespace std;

int isSorted(vector<int> arr, int n) {
	bool sorted = true;

	for(int i=0; i<n-1; i++) {
	    if(arr[i] > arr[i+1]) {
	        sorted = false;
	        break;
	    }
	}
	
	cout << (sorted ? "Yes" : "No");
	return 0;
}

int main() {
	int n;
	cout << "Enter the size of array: ";
	cin >> n;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;
	
	isSorted(arr, n);
	
	return 0;
}