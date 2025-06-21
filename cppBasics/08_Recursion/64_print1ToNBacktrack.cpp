/*
❖ Problem: Print Linearly from 1 to N (Using Backtracking)

➤ Task:
Given a number N, print numbers from 1 to N using backtracking.

➤ Input:
An integer N

➤ Output:
1 2 3 ... N

➤ Sample Input:
5

➤ Sample Output:
1 2 3 4 5

➤ Constraints:
- 1 <= N <= 10^4
- Use recursion with backtracking (print after recursive call)

➤ Hint:
Start from 1, recurse to N, and then print while coming back from recursion.
*/


// Method 1
#include<bits/stdc++.h>
using namespace std;

void printNumbersBacktrack(int i, int n) {
	if(i < 1) return;

	printNumbersBacktrack(i-1, n);
	cout << i << " ";
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	printNumbersBacktrack(n, n);
	return 0;
}


// Method 2
#include<bits/stdc++.h>
using namespace std;

void printNumbersBacktrack(int i, int n) {
	if(i > n) return;

	printNumbersBacktrack(i+1, n);
	cout << n-i+1 << " ";
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	printNumbersBacktrack(1, n);
	return 0;
}