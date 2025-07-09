/*
❖ Problem: Check if a String is Palindrome (Recursion)

➤ Task:
Write a recursive function to check if a given string is a palindrome.

➤ Input:
A lowercase string `s`

➤ Output:
"Yes" if palindrome, otherwise "No"

➤ Sample Input:
madam

➤ Sample Output:
Yes

➤ Constraints:
1 <= |s| <= 1000

➤ Hint:
Compare characters at start and end, then recurse inward.
*/

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int start, int end) {
    if(start >= end) return true;
    if(str[start] != str[end]) return false;
    
	return isPalindrome(str, start+1, end-1);
}

int main() {
	string str;
	cout << "Enter the string: ";
	cin >> str;
	
	cout << (isPalindrome(str, 0, str.length()-1) ? "The String is Palindrome" : "The String is not Palindrome");
	return 0;
}