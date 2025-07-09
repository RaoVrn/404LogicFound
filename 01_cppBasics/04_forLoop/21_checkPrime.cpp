/*
Write a C++ program to check if a number is prime using a for loop.

➤ Take an integer input `N`.
➤ Print "Prime" if N is a prime number, otherwise print "Not Prime".

Examples:
Input: 7
Output: Prime

Input: 10
Output: Not Prime

Use `cout` for printing.
*/


// -------------------------
// Method 1
// -------------------------

#include<iostream>
using namespace std;

int main() {
	int n, count=0;
	cout << "Enter the number: ";
	cin >> n;

	for (int i=2; i<=n; i++) {
		if (n%i == 0) {
			count += 1;
		}
	}
	if (count > 1) {
		cout << n << " is not a Prime Number";
	}
	else {
		cout << n << " is a Prime Number";
	}
	return 0;
}



// -------------------------
// Method 2
// -------------------------

#include<iostream>
using namespace std;

int main() {
	int n, i;
	cout << "Enter the value of n: ";
	cin >> n;

	bool isPrime = true;
	
	if(n<=1) {
	    isPrime = false;
	}
	else {
	    for (i=2; i*i<=n; i++) {
	        if (n%i == 0) {
	            isPrime = false;
	            break;
	        }
	    }
	}
	cout << (isPrime ? "Prime Number" : "Not a Prime Number");

	return 0;
}