/*
Write a C++ program to print a left-aligned full pyramid followed by an inverted left-aligned pyramid using stars `*`.

➤ Input:
An integer `n` representing the number of rows for the pyramid.

➤ Output Pattern (for n = 5):

*
**
***
****
*****
****
***
**
*

➤ Method 1: Nested loops in `main()`.
➤ Method 2: Use `printDoubleLeftPyramid(int n)` function.
*/


// -------------------------
// Method 1: Logic inside main function
// -------------------------

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    // Top half
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half
    for(int i = n - 1; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}




// -------------------------
// Method 2: Use printDoubleLeftPyramid(int n) function
// -------------------------

#include<iostream>
using namespace std;

void printDoublePyramid(int n) {
    // Top half
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half
    for(int i = n - 1; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    printDoublePyramid(n);
    
    return 0;
}
