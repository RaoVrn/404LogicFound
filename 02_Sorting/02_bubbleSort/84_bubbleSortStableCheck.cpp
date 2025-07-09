/*
📌 Problem 4: Is Bubble Sort Stable?

🎯 Goal:
Verify if bubble sort maintains relative order of equal elements.

🧾 Input:
- Array of structs (e.g., students with name + marks)
- Sort by marks

🖨️ Output:
- Sorted array with order of names

💡 Bubble sort is stable — so original order of equal elements will be preserved.
*/

#include<bits/stdc++.h>
using namespace std;

struct Students {
	string name;
	int marks;
};

void bubbleSort(Students arr[], int n) {
	for(int i=n-1; i>=0; i--) {
		for(int j=0; j<i; j++) {
			if(arr[j].marks > arr[j+1].marks) {
				swap(arr[j], arr[j+1]);
			}
		}
	}
}

int main() {
	int n;
	cout << "Enter the number of students: ";
	cin >> n;

	Students arr[n];
	for(int i=0; i<n; i++) {
		cin >> arr[i].name >> arr[i].marks;
	}

	bubbleSort(arr, n);

    cout << endl;
	for(int i=0; i<n; i++) {
		cout << arr[i].name << " " << arr[i].marks << endl;
	}
	
	return 0;
}