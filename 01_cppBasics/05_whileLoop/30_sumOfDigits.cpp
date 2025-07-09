/*
Write a C++ program to find the sum of digits of a number using a while loop.

➤ Take an integer input `N`.
➤ Find the sum of all digits and print the result.

Example:
Input: 123
Output: 6

Use `cout` for printing.
*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    int sum = 0;

    while (N > 0) {
        int digit = N % 10;
        sum += digit;
        N = N / 10;
    }

    cout << "Sum of digits: " << sum << endl;

    return 0;
}
