/*
📌 Problem: Remove Duplicates from Sorted Array

🎯 Goal:
Remove duplicates from a sorted array and return the count of unique elements.

🧾 Input:
- First line: Integer n
- Second line: n space-separated sorted integers

🖨️ Output:
- Count of unique elements
- Modified array with unique elements in order

🧪 Example:
Input:
6
1 1 2 2 3 4

Output:
4
1 2 3 4

📚 Constraints:
- 1 <= n <= 10^3

💡 Approach:
Use a pointer to track position to insert unique values.
*/


// Method 1: Using Set
// Time Complexity: O(n log n)
// Space Complexity: O(n)
#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(vector<int>& arr, int n) {
	set<int> st;

	for(int i=0; i<n; i++) {
		st.insert(arr[i]);
	}
	
	int i=0;
	for(auto it : st) {
		arr[i] = it;
		i++;
	}
	
	cout << i << endl;
	
	for(int j=0; j<i; j++) {
	    cout << arr[j] << " ";
	}
	
	return i;
}

int main() {
	int n;
	cout << "Enter the size of array: ";
	cin >> n;

	vector<int> arr(n);
	for(int &it : arr) cin >> it;
	
	removeDuplicate(arr, n);
	
	return 0;
}



// Method 2: Using Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;

void removeDuplicate(vector<int>& arr, int n) {
    int i = 0;
    for(int j=1; j<n; j++) {
        if(arr[i] != arr[j]) {
            arr[i+1] = arr[j];
            i++;
        }
    }
    
    cout << i+1 << endl;
    
    for(int j=0; j<i+1; j++) {
        cout << arr[j] << " ";
    }
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    
    vector<int> arr(n);
    for(int &it : arr) {
        cin >> it;
    }
    
    removeDuplicate(arr, n);
    
    return 0;
}