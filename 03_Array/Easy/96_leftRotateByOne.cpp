/*
📌 Problem: Left Rotate an Array by One Place

🎯 Goal:
Rotate the array to the left by one position.

🧾 Input:
- First line: Integer n (size of array)
- Second line: n space-separated integers

🖨️ Output:
- Array after one left rotation

🧪 Example:
Input:
5
1 2 3 4 5

Output:
2 3 4 5 1

📚 Constraints:
- 1 <= n <= 10^5

💡 Approach:
Store the first element in a temp variable. 
Shift all elements left by 1 position. 
Place temp at the end.
*/


// Method 1: Using a temporary vector
#include<bits/stdc++.h>
using namespace std;

void leftRotate(vector<int>& arr, int n) {
	vector<int> temp;

	for(int i=1; i<n; i++) {
		temp.push_back(arr[i]);
	}
	
	temp.push_back(arr[0]);

	for(int x : temp) cout << x << " ";
}

int main() {
	int n;
	cout << "Enter the size of array: ";
	cin >> n;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;

	leftRotate(arr, n);

	return 0;
}


// Method 2: Using a temporary variable
#include<bits/stdc++.h>
using namespace std;

void leftRotate(vector<int>& arr, int n) {
	int temp = arr[0];

	for(int i=1; i<n; i++) {
		arr[i-1] = arr[i];
	}
	
	arr[n-1] = temp;

	for(int x : arr) cout << x << " ";
}

int main() {
	int n;
	cout << "Enter the size of array: ";
	cin >> n;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;

	leftRotate(arr, n);

	return 0;
}