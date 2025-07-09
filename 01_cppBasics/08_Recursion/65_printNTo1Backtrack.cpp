/*
❖ Problem: Print From N to 1 (Using Backtracking)

➤ Task:
Given a number N, print numbers from N to 1 using backtracking.

➤ Input:
An integer N

➤ Output:
N N-1 ... 1

➤ Sample Input:
5

➤ Sample Output:
5 4 3 2 1

➤ Constraints:
- 1 <= N <= 10^4
- Use recursion with backtracking (print after recursive call)

➤ Hint:
Start from 1, recurse to N, then print in reverse on return path.
*/

// Method 1
#include<bits/stdc++.h>
using namespace std;

void printNumbersBacktrack(int i, int n) {
	if(i > n) return;
	
	printNumbersBacktrack(i+1, n);
	cout << i << " ";
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	printNumbersBacktrack(1, n);
	return 0;
}