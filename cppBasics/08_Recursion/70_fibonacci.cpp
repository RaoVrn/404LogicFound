/*
❖ Problem: Fibonacci Number (Recursion)

➤ Task:
Given an integer N, write a recursive function to return the N-th Fibonacci number.

➤ Input:
An integer N

➤ Output:
The N-th Fibonacci number

➤ Sample Input:
6

➤ Sample Output:
8

➤ Explanation:
Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8...

➤ Constraints:
0 <= N <= 30

➤ Hint:
Fib(n) = Fib(n - 1) + Fib(n - 2)
*/

#include<bits/stdc++.h>
using namespace std;

int fibonacciNumber(int n) {
	if(n <= 1) return n;

	return fibonacciNumber(n-1) + fibonacciNumber(n-2);
}

int main() {
	int n;
	cout << "Enter the number: ";
	cin >> n;

	cout << fibonacciNumber(n) << endl;
	return 0;
}