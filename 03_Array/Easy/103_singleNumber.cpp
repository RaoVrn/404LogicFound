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



// Method 2: Using Hash Map
// Time Complexity: O(2*n)
// Space Complexity: O(n)
#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& arr, int n) {
    unordered_map<int, int> freq;
	for(int num : arr) freq[num]++;
	for(auto it : arr) {
	    if(it.second == 1) return it.first;
	}
	
	return -1;
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


// Method 3: Using Sorting
// Time Complexity: O(n log n)
// Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& arr, int n) {
	sort(arr.begin, arr.end);
	for(int i=0; i<n-1; i++) {
	    if(arr[i] != arr[i+1]) {
	        return arr[i];
	    }
	}
	return arr[n-1]
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


// Method 4: Brute Force
// Time Complexity: O(n^2)
// Space Complexity: O(1)
#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& arr, int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;
        
        // Compare arr[i] with every element in the array
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // If count is 1, it's the unique number
        if (count == 1) {
            return arr[i];
        }
    }

    return -1; // Just in case (shouldn't happen with valid input)
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int &it : arr) cin >> it;

    cout << "Unique number: " << singleNumber(arr, n) << endl;

    return 0;
}
