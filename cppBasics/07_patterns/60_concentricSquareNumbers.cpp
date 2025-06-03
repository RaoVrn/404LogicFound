/*
Write a C++ program to print a square concentric number pattern.

➤ Input:
An integer `n` which represents the number at the outermost layer.

➤ Output:
A 2D pattern of size `(2*n - 1) x (2*n - 1)` where each layer from outside to inside contains decreasing numbers from `n` to `1`.

➤ Example (n = 4):
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
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
    
    int size = 2*n-1;
    
    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            int min_dist = min(min(i, j), min(size-1-i, size-1-j));
            cout << n - min_dist;
        }
        
        cout << endl;
    }
    
    return 0;
}


// -------------------------
// Method 2: Use printConcentricSquareNumbers(int n) function
// -------------------------

#include<iostream>
using namespace std;

void printConcentricSquare(int n, int size) {
    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            int min_dist = min(min(i, j), min(size-1-i, size-1-j));
            cout << n - min_dist;
        }
        
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int size = 2*n-1;
    
    printConcentricSquare(n, size);
    
    return 0;
}