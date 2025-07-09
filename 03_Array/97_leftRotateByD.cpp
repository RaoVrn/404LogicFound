/*
📌 Problem: Left Rotate an Array by D Places

🎯 Goal:
Rotate the array to the left by D positions.

🧾 Input:
- First line: Integer n (array size), d (number of rotations)
- Second line: n space-separated integers

🖨️ Output:
- Array after d left rotations

🧪 Example:
Input:
5 2
1 2 3 4 5

Output:
3 4 5 1 2

📚 Constraints:
- 1 <= n <= 10^5
- 0 <= d <= n

💡 Approach:
Use reverse method:
1. Reverse first d elements.
2. Reverse remaining n-d elements.
3. Reverse the whole array.
*/


// Method 1: Using reverse method
// Time Complexity: O(n)
// Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>& arr, int start, int end) {
	while(start <= end) {
	    swap(arr[start++], arr[end--]);
	}
}

void leftRotate(vector<int>& arr, int n, int d) {
	d %= n;
	reverse(arr, 0, d-1);
	reverse(arr, d, n-1);
	reverse(arr, 0, n-1);

	for(int x : arr) cout << x << " ";
}

int main() {
	int n, d;
	cout << "Enter the size of array: ";
	cin >> n;
	
	cout << "Enter the value of d: ";
	cin >> d;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;

	leftRotate(arr, n, d);

	return 0;
}



// Method 2: Using a temporary vector
// Time Complexity: O(n)
// Space Complexity: O(n)
#include<bits/stdc++.h>
using namespace std;

void leftRotate(vector<int>& arr, int n, int d) {
	vector<int> temp;

	for(int i=d; i<n; i++) {
		temp.push_back(arr[i]);
	}

	for(int i=0; i<d; i++) {
		temp.push_back(arr[i]);
	}

	for(int x : temp) cout << x << " ";
}

int main() {
	int n, d;
	cout << "Enter the size of array: ";
	cin >> n;
	
	cout << "Enter the value of d: ";
	cin >> d;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;

	leftRotate(arr, n, d);

	return 0;
}



//Method 3: Using a nested loop to reverse the array
// Time Complexity: O(n^2)
// Space Complexity: O(n)
#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>& arr, int start, int end) {
    vector<int> temp;
	for(int i=start; i<=end/2; i++) {
		for(int j=end; j>=i; j--) {
			temp.push_back(arr[j]);
		}
	}
	
	for(int i=0; i<temp.size(); i++) {
	    arr[start + i] = temp[i];
	}
}

void leftRotate(vector<int>& arr, int n, int d) {
	d %= n;
	reverse(arr, 0, d-1);
	reverse(arr, d, n-1);
	reverse(arr, 0, n-1);

	for(int x : arr) cout << x << " ";
}

int main() {
	int n, d;
	cout << "Enter the size of array: ";
	cin >> n;
	
	cout << "Enter the value of d: ";
	cin >> d;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;

	leftRotate(arr, n, d);

	return 0;
}