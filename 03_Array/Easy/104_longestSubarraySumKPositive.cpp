/*
📌 Problem: Longest Subarray with Sum K (Positives Only)

🎯 Goal:
Find the length of the longest contiguous subarray with sum equal to K in an array of positive integers.

🧾 Input:
- First line: Two integers n (size of array) and K
- Second line: n space-separated positive integers

🖨️ Output:
- Length of the longest subarray with sum exactly K

🧪 Example:
Input:
5 12
1 2 3 7 5

Output:
3

📚 Constraints:
- 1 <= n <= 10^5
- 1 <= array[i], K <= 10^9

💡 Approach:
Use the sliding window technique since all numbers are positive.
*/


// Method 1: Brute Force
// Time Complexity: O(n^3)
// Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& arr, int n, int k) {
	int len = 0;
	for(int i=0; i<n; i++) {
		for(int j=i; j<n; j++) {
			int sum = 0;
			for(int l=i; l<=j; l++) {
				sum += arr[l];
			}

			if(sum == k) {
				len = max(len, j-i+1);
			}
		}
	}

	return len;
}

int main() {
	int n, k;
	cout << "Enter size of array and k: ";
	cin >> n >> k;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;

	cout << longestSubarray(arr, n, k);

	return 0;
}


// Method 2: Using Brute Force with Prefix Sum
// Time Complexity: O(n^2)
// Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& arr, int n, int k) {
	int len = 0;
	for(int i=0; i<n; i++) {
	    int sum = 0;
		for(int j=i; j<n; j++) {
		    sum += arr[j];

			if(sum == k) {
				len = max(len, j-i+1);
			}
		}
	}

	return len;
}

int main() {
	int n, k;
	cout << "Enter size of array and k: ";
	cin >> n >> k;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;

	cout << longestSubarray(arr, n, k);

	return 0;
}



// Method 3: Using Hash Map
// Time Complexity: O(n)
// Space Complexity: O(n)
#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& arr, int n, int k) {
    int sum = 0;
    map<int, int> mpp;
    int maxLen = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
        
        if(sum == k) {
            maxLen = max(maxLen, i+1);
        }
        
        int rem = sum - k;
        if(mpp.find(rem) != mpp.end()) {
            int len = i - mpp[rem];
            maxLen = max(maxLen, len);
        }
        
        if(mpp.find(sum) == mpp.end()) {
            mpp[sum] = i;
        }
    }
    
    return maxLen;
}

int main() {
    int n, k;
    cout << "Enter the size of array and value of k: ";
    cin  >> n >> k;
    
    vector<int> arr(n);
    for(int &it : arr) cin >> it;
    
    cout << longestSubarray(arr, n, k);
    
    return 0;
}



//Method 4: Using Sliding Window
// Time Complexity: O(n)
// Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& arr, int n, int k) {
	int sum = arr[0];
	int maxLen = 0;
	int left = 0, right = 0;

	while(right < n) {
		while(left <= right && sum > k) {
			sum -= arr[left];
			left++;
		}

		if(sum == k) {
			maxLen = max(maxLen, right - left + 1);
		}

		right++;
		if(right < n) sum += arr[right];
	}
	
	return maxLen;
}

int main() {
	int n, k;
	cout << "Enter the size of array and value of k: ";
	cin >> n >> k;

	vector<int> arr(n);

	for(int &it : arr) cin >> it;

	cout << longestSubarray(arr, n, k);

	return 0;
}