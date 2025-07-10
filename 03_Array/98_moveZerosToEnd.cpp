/*
📌 Problem: Move Zeros to End

🎯 Goal:
Move all 0's to the end of the array while maintaining the order of non-zero elements.

🧾 Input:
- First line: Integer n
- Second line: n space-separated integers

🖨️ Output:
- Modified array with non-zeros first, followed by zeros

🧪 Example:
Input:
6
0 1 0 3 12 0

Output:
1 3 12 0 0 0

📚 Constraints:
- 1 <= n <= 10^5

💡 Approach:
Use a pointer to track the position to place the next non-zero element, then fill the rest with zeros.
*/


// Method 1: Using two pointers to rearrange in-place
// Time Complexity: O(n)
// Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;

void moveZeros(vector<int>& arr, int n) {
    int index = 0;
	for(int i=0; i<n; i++) {
		if(arr[i] != 0) {
			arr[index++] = arr[i];
		}
	}
	
	while(index < n) {
		arr[index++] = 0;
	}
	
	for(int x : arr) cout << x << " ";
}

int main() {
	int n;
	cout << "Enter the size of array: ";
	cin >> n;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;

	moveZeros(arr, n);

	return 0;
}



// Method 2: Using a temporary vector to store non-zero elements
// Time Complexity: O(n)
// Space Complexity: O(n)
#include<bits/stdc++.h>
using namespace std;

void moveZeros(vector<int>& arr, int n) {
	vector<int> temp;

	for(int i=0; i<n; i++) {
		if(arr[i] != 0) {
			temp.push_back(arr[i]);
		}
	}
	
	int j = temp.size();
	while(j < n) {
		temp.push_back(0);
		j++;
	}
	
	for(int x : temp) cout << x << " ";
}

int main() {
	int n;
	cout << "Enter the size of array: ";
	cin >> n;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;

	moveZeros(arr, n);

	return 0;
}