/*
📌 Problem 2: Stability of Selection Sort

🎯 Goal:
Demonstrate whether selection sort is stable when sorting elements with the same key.

🧾 Input:
- n students with roll numbers and marks
- Sort them by marks

🧪 Example:
Input:
4
1 50
2 40
3 50
4 30

Output:
4 2 3 1

❗ Observation:
Student 1 and 3 have the same marks. In stable sort, 1 should come before 3, but selection sort swaps arbitrarily.

📚 Stability:
Selection sort is **not stable** by default.
*/

#include<bits/stdc++.h>
using namespace std;

struct Students {
	int roll;
	int marks;
};

void selectionSort(Students arr[], int n) {
	for(int i=0; i<n-1; i++) {
		int min = i;
		for(int j=i+1; j<n; j++) {
			if(arr[j].marks < arr[min].marks) 
			    min = j;
		}
	swap(arr[i], arr[min]);
	}
}

int main() {
	int n;
	cout << "Enter the number of students: ";
	cin >> n;

	Students arr[n];

	for(int i=0; i<n; i++){
		cin >> arr[i].roll >> arr[i].marks;
	}

	selectionSort(arr, n);

    cout << endl;
	for(int i=0; i<n; i++) {
		cout << arr[i].roll << " " << arr[i].marks << endl;
	}
	
	return 0;
}