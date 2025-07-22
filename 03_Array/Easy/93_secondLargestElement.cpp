/*
📌 Problem: Second Largest Element in an Array (Without Sorting)

🎯 Goal:
Find the second largest unique integer in the array without using sorting.

🧾 Input:
- First line: Integer n
- Second line: n space-separated integers

🖨️ Output:
- The second largest unique element
- If not found, print -1

🧪 Example:
Input:
6
5 2 9 1 9 5

Output:
5

📚 Constraints:
- 2 <= n <= 10^3
- -10^6 <= arr[i] <= 10^6

💡 Approach:
Use two variables: one for the largest and another for second largest.
Traverse the array once and update both variables accordingly.
*/



#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>& arr, int n) {
	int largest = arr[0];
	int s_largest = INT_MIN;

	for(int i=1; i<n; i++) {
		if(arr[i] > largest) {
			s_largest = largest;
			largest = arr[i];
		} else if(arr[i] > s_largest && arr[i] != largest) {
			s_largest = arr[i];
		}
	}
	return s_largest;
}

int main() {
	int n;
	cout << "Enter the size of array: ";
	cin >> n;

	vector<int> arr(n);
	for(int &it : arr) {
		cin >> it;
	}

	cout << secondLargest(arr, n);

	return 0;
}