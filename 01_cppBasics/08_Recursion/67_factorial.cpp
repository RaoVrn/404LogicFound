/*
❖ Problem: Factorial of N (Recursion)

➤ Task:
Given a number N, write a recursive function to calculate its factorial.

➤ Input:
An integer N

➤ Output:
An integer representing N!

➤ Sample Input:
5

➤ Sample Output:
120

➤ Explanation:
5! = 5 × 4 × 3 × 2 × 1 = 120

➤ Constraints:
1 <= N <= 12 (to avoid overflow)

➤ Hint:
Factorial(n) = n * Factorial(n - 1)
*/

#include<bits/stdc++.h>
using namespace std;

void printFactorial(int n, int fact) {
	if(n < 1) {
		cout << fact;
		return;
	}

	printFactorial(n-1, fact*n);
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	printFactorial(n, 1);
	return 0;
}