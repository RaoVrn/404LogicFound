/*
📌 Problem 6: Count Number of Passes in Bubble Sort

🎯 Goal:
Given an unsorted array, return the total number of passes bubble sort would take
to completely sort the array.

🧾 Input:
- First line: n (number of elements)
- Second line: n space-separated integers

🖨️ Output:
- Number of passes

🧪 Example:
Input:
5
5 4 3 2 1

Output:
4

Input:
5
1 2 3 4 5

Output:
0

📚 Constraints:
- 1 <= n <= 10^3
- -10^6 <= arr[i] <= 10^6

💡 Bubble Sort Insight:
Each full pass moves the largest unsorted element to the right.
If no swaps occur in a pass, the array is already sorted.
This question tests understanding of the "early exit" optimization in bubble sort.
*/

#include<bits/stdc++.h>
using namespace std;

int bubbleSort(int arr[], int n) {
    int count = 0;
	for(int i=n-1; i>=0; i--) {
	    bool swapped = false;
		for(int j=0; j<i; j++) {
			if(arr[j] > arr[j+1]) {
			    swap(arr[j], arr[j+1]);
				swapped = true;
		    }
	    }
	    
	    if(swapped) count++;
	    else break;
    }
    
    return count;
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	int arr[n];
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	
	cout << bubbleSort(arr, n);

	return 0;
}