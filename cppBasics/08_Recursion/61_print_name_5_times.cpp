/*
❖ Problem: Print Name 5 Times (Recursion)

➤ Task:
Write a recursive function that prints your name exactly 5 times.

➤ Constraints:
- Do not use any loops (for/while).
- Use recursion only.

➤ Sample Output:
Varun
Varun
Varun
Varun
Varun

➤ Hint:
Use a helper function with a counter to stop recursion when it reaches 5.
*/

#include<bits/stdc++.h>
using namespace std;

void printName(int i, int n) {
	if(i > n) return;

	cout << "Varun" << endl;
	printName(i+1, n);
}

int main() {
	int n;

	cout << "Enter the value of n: ";
	cin >> n;

	printName(1, n);
	
	return 0;
}