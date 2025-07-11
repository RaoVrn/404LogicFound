/*
📌 Problem: Find Missing Number

🎯 Goal:
Find the missing number from array of size n containing numbers from 1 to n.

🧾 Input:
- First line: Integer n (size of array)
- Second line: n space-separated integers from 1 to n+1 with one missing

🖨️ Output:
- Missing number

🧪 Example:
Input:
4
1 2 4 5

Output:
3

📚 Constraints:
- 1 <= n <= 10^5

💡 Approach:
Use sum formula or XOR to find the missing number.
*/


// Method 1: Using XOR
// Time Complexity: O(n)
// Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& arr, int n) {
	int xor1 = 0, xor2 = 0;

	for(int i=0; i<n-1; i++) {
		xor2 ^= arr[i];
		xor1 ^= i+1;
	}

	xor1 ^= n;

    return xor1 ^ xor2;
}

int main() {
	int n;
	cout << "Enter the size of array: ";
	cin >> n;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;

	cout << missingNumber(arr, n);

	return 0;
}


// Method 2: Using Sum Formula
// Time Complexity: O(n)
// Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& arr, int n) {
	int total_sum = (n * (n+1)) / 2;
	int sum = 0;

	for(int i=0; i<n; i++) {
		sum += arr[i];
	}

    if(arr[n-1] > n) {
        return total_sum - sum + arr[n-1];
    } else {
        return total_sum - sum;
    }
}

int main() {
	int n;
	cout << "Enter the size of array: ";
	cin >> n;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;

	cout << missingNumber(arr, n);

	return 0;
}


// Method 3: Using Hashing
// Time Complexity: O(2*n)
// Space Complexity: O(n)
#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& arr, int n) {
    vector<int> hash(n+1, 0);
    
    for(int i=0; i<n; i++) {
        hash[arr[i]] = 1;
    }
    
    for(int i=0; i<n; i++) {
        if(hash[i] == 0) {
            return i;
        }
    }
    
    return -1;
}

int main() {
	int n;
	cout << "Enter the size of array: ";
	cin >> n;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;

	cout << missingNumber(arr, n);

	return 0;
}


// Method 4: Brute Force
// Time Complexity: O(n^2)
// Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& arr, int n) {
	for(int i=0; i<=n; i++) {
	    bool flag = false;
	    for(int j=0; j<n; j++) {
	        if(arr[j] == i) {
	            flag = true;
	            break;
	        }
	    }
	    if(!flag) return i;
	}
	return -1;
}

int main() {
	int n;
	cout << "Enter the size of array: ";
	cin >> n;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;

	cout << missingNumber(arr, n);

	return 0;
}