/*
❓ Problem: Sort an Array of 0s, 1s and 2s

You are given an array/list `arr` consisting of `n` elements, where each element is either 0, 1, or 2.
Your task is to sort the array in increasing order in-place (i.e., without using extra space for another array).

📥 Input:
- An integer `n` representing the number of elements.
- An array `arr` of size `n` where 0 <= arr[i] <= 2.

📤 Output:
- Sort the array in-place so that all 0s come first, followed by all 1s, then all 2s.

🔍 Example:
Input: arr = [0, 2, 1, 2, 0]
0 0 1 1 2 1 0
Output: [0, 0, 1, 2, 2]

💡 Constraints:
- 1 <= n <= 5000
- arr[i] ∈ {0, 1, 2}
- Time Limit: 1 second

🧠 Try solving using:
1. Brute force (using sort function)
2. Better (counting method)
3. Optimal (Dutch National Flag algorithm)
*/


// Method 1: Using Sort Function
// Time Complexity: O(n log n)
// Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;
void sort012Array(vector<int>& arr, int n) {
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}
int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    for(int &it : arr) cin >> it;

    sort012Array(arr, n);

    return 0;
}




// Method 2: Using Counting Sort
// Time Complexity: O(3n)
// Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;

void sort012Array(vector<int>& arr, int n) {
	int count_0 = 0, count_1 = 0, count_2 = 0;
	
	for(int i=0; i<n; i++) {
		if(arr[i] == 0) count_0++;
		else if(arr[i] == 1) count_1++;
		else count_2++;
	}

	for(int i=0; i<count_0; i++) {
		arr[i] = 0;
	}

	for(int i=count_0; i<count_0 + count_1; i++) {
		arr[i] = 1;
	}

	for(int i=count_0 + count_1; i<n; i++) {
		arr[i] = 2;
	}

	for(int &it : arr) cout << it << " ";
}

int main() {
	int n;
	cout << "Enter the size of array: ";
	cin >> n;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;

	sort012Array(arr, n);

	return 0;
}




// Method 3: Using Dutch National Flag Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;

void sort012Array(vector<int>& arr, int n) {
    int left = 0, mid = 0, high = n-1;
    
    while(mid <= high) {
        if(arr[mid] == 0) {
            swap(arr[left], arr[mid]);
            left++;
            mid++;
        } else if(arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    
    for(int &it : arr) cout << it << " ";
}

int main() {
	int n;
	cout << "Enter the size of array: ";
	cin >> n;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;

	sort012Array(arr, n);

	return 0;
}