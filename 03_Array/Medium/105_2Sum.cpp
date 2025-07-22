/*
📌 Problem: Two Sum Problem

🧾 Description:
Given an array of integers and a target sum, determine whether there exists a **pair of distinct elements** in the array whose sum is equal to the target.

🎯 Task:
Return or print "Yes" if such a pair exists, otherwise return or print "No".

🧾 Input Format:
- First line: Integer n (number of elements in the array)
- Second line: n space-separated integers (array elements)
- Third line: Integer target (the required sum)

🔁 Constraints:
- 2 <= n <= 10^3
- -10^4 <= arr[i] <= 10^4
- Use different indices: i != j

🧪 Example:
Input:
6
2 6 5 8 11 14
14

Output:
Yes

💡 Explanation:
The pair (6, 8) gives the required sum 14.

⏱ Multiple Approaches:
- Brute Force: O(n^2)
- Better (using hash map): O(n)
- Optimal (using two pointers after sorting): O(n log n)
*/


// Method 1: Brute Force Approach
// Time Complexity: O(n^2)
// Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;

void twoSum(vector<int>& arr, int n, int k) {
	int sum = 0;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if(i == j) continue;
			sum = arr[i] + arr[j];
			
			if(sum == k) {
			    cout << "Yes -> " << arr[i] << " + " << arr[j];
			    return;
			}
		}
	}
	
	cout << "No";
}

int main() {
	int n;
	cout << "Enter the size of array: ";
	cin >> n;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;

	int k;
	cout << "Enter the target integer: ";
	cin >> k;

	twoSum(arr, n, k);

	return 0;
}




// Method 2: Using Hash Map
// Time Complexity: O(n x log n) for map operations, O(n) for traversal
// Space Complexity: O(n)
#include<bits/stdc++.h>
using namespace std;

void twoSum(vector<int>& arr, int n, int k) {
	map<int, int> mpp;
	for(int i=0; i<n; i++) {
	    int diff = k - arr[i];
	    
	    if(mpp.find(diff) != mpp.end()) {
	        cout << "Yes -> " << diff << " + " << arr[i];
	        return;
	    }
	    
	    mpp[arr[i]] = i;
	}
	
	cout << "No";
}

int main() {
	int n;
	cout << "Enter the size of array: ";
	cin >> n;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;

	int k;
	cout << "Enter the target integer: ";
	cin >> k;

	twoSum(arr, n, k);

	return 0;
}



// Method 3: Using Two Pointers (after sorting)
// Time Complexity: O(n x log n) for sorting, O(n) for two pointers
// Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;

void twoSum(vector<int>& arr, int n, int k) {
    sort(arr.begin(), arr.end());
    int sum = 0, left = 0, right = n-1;
    
    for(int i=0; i<n; i++) {
        sum = arr[left] + arr[right];
        
        if(sum == k) {
            cout << "Yes -> " << arr[left] << " + " << arr[right];
	        return;
        }
        
        if(sum < k) left++;
        if(sum > k) right--;
    }
    cout << "No";
}

int main() {
	int n;
	cout << "Enter the size of array: ";
	cin >> n;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;

	int k;
	cout << "Enter the target integer: ";
	cin >> k;

	twoSum(arr, n, k);

	return 0;
}