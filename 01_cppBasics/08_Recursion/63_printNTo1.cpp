/*
❖ Problem: Print From N to 1 (Recursion)

➤ Task:
Given a number N, print numbers from N to 1 using recursion.

➤ Input:
An integer N

➤ Output:
Print numbers from N to 1 on the same line, separated by spaces.

➤ Sample Input:
5

➤ Sample Output:
5 4 3 2 1

➤ Constraints:
- 1 <= N <= 10^4
- Use recursion only.

➤ Hint:
Print before the recursive call to count down.
*/


#include<bits/stdc++.h>
using namespace std;

void printNumbers(int N) {
	if(N < 1) return;

	cout << N << " ";
	printNumbers(N-1);
}

int main() {
	int N;
	cout << "Enter the value of N: ";
	cin >> N;

	printNumbers(N);
	return 0;
}