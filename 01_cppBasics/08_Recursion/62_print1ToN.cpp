/*
❖ Problem: Print Linearly from 1 to N (Recursion)

➤ Task:
Given a number N, print numbers from 1 to N using recursion.

➤ Input:
An integer N

➤ Output:
Print numbers from 1 to N on the same line, separated by spaces.

➤ Sample Input:
5

➤ Sample Output:
1 2 3 4 5

➤ Constraints:
- 1 <= N <= 10^4
- Do not use loops.

➤ Hint:
Use a function that prints and increments.
*/

#include<bits/stdc++.h>
using namespace std;

void printNumbers(int i, int N) {
	if(i > N) return;

	cout << i << " ";
	printNumbers(i+1, N);
}

int main() {
	int N;
	cout << "Enter the value of N: ";
	cin >> N;

	printNumbers(1, N);

	return 0;
}