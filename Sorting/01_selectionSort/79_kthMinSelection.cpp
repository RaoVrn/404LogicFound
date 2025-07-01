/*
📌 Problem 3: Kth Minimum Element Using Selection Sort

🎯 Goal:
Return the Kth smallest element using only selection sort (up to K iterations)

🧾 Input:
- First line: n and k
- Second line: n integers

🖨️ Output:
- Kth smallest element

🧪 Example:
Input:
6 3
13 46 24 52 20 9

Output:
20

📚 Constraints:
- 1 <= k <= n <= 10^3
*/

#include<bits/stdc++.h>
using namespace std;

int selectionSort(int arr[], int n, int k) {
	for(int i=0; i<k; i++) {
		int min = i;
		for(int j=i+1; j<n; j++) {
			if(arr[j] < arr[min])
				min = j;
		}
	    swap(arr[i], arr[min]);
	}
	
	return arr[k-1];
}

int main() {
	int n, k;
	cout << "Enter the size of array and value of k: ";
	cin >> n >> k;
	
	int arr[n];

	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	
	cout << selectionSort(arr, n, k) << endl;
	
	return 0;
}