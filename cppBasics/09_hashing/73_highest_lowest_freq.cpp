/*
❖ Problem: Highest and Lowest Frequency Element

➤ Task:
From an array of integers, find the element with:
- The highest frequency
- The lowest frequency

➤ Input:
arr = [1, 2, 2, 3, 3, 3, 4]

➤ Output:
Highest Frequency: 3 (element: 3)
Lowest Frequency: 1 (element: 4)

➤ Constraints:
- 1 ≤ n ≤ 10^5
- All elements ≤ 10^6

➤ Use Case:
- Useful in surveys, mode detection, etc.

➤ Tags: Hashing, Frequency, Max/Min
*/


#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cout << "Enter the number of elements of array: ";
	cin >> n;

	int arr[n];
	unordered_map<int, int> mpp;

	for(int i=0; i<n; i++) {
		cin >> arr[i];
		mpp[arr[i]]++;
	}
	
	int maxFreq = 0;
	int minFreq = INT_MAX;
	int maxElem = -1;
	int minElem = -1;
	for(auto &[key, val]: mpp) {
		if(val > maxFreq) {
		    maxFreq = val;
			maxElem = key;
		}

		if(val < minFreq) {
			minFreq = val;
			minElem = key;
		}
	}
		
	cout << "Highest Frequency: " << maxFreq << "(element: " << maxElem << ")" << endl;
	cout << "Lowest Frequency: " << minFreq << "(element: " << minElem << ")" << endl;
	
	return 0;
}