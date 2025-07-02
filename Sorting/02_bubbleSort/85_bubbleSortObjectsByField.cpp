/*
📌 Problem 5: Bubble Sort Array of Objects by Marks

🎯 Goal:
Given array of students with marks, sort using bubble sort by marks.

🧾 Input:
- First line: n
- Next n lines: name and marks

🖨️ Output:
- Sorted list by marks

🧪 Example:
Input:
3
Ram 40
Shyam 30
Mira 50

Output:
Shyam Ram Mira

📚 Note:
Same logic can be applied to any object field.
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
	cout << "Enter the number of Students: ";
	cin >> n;

	Students arr[n];
	for(int i=0; i<n; i++) {
		cin >> arr[i].name >> arr[i].marks;
	}

	bubbleSort(arr, n);

    cout << endl;
	for(int i=0; i<n; i++) {
		cout << arr[i].name << " ";
	}

	return 0;
}