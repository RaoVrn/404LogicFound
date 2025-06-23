/*
❖ Problem: Sum of First N Numbers (Recursion)

➤ Task:
Given a number N, write a recursive function to find the sum of the first N natural numbers.

➤ Input:
An integer N

➤ Output:
An integer representing the sum from 1 to N

➤ Sample Input:
5

➤ Sample Output:
15

➤ Explanation:
1 + 2 + 3 + 4 + 5 = 15

➤ Constraints:
1 <= N <= 10^4

➤ Hint:
Sum(n) = n + Sum(n-1)
*/

#include<bits/stdc++.h>
using namespace std;

void printSum(int n, int sum){
	if(n < 1) {
		cout << sum;
		return;
	}

	printSum(n-1, sum+n);
}

int main() {
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	printSum(n, 0);
	return 0;
}