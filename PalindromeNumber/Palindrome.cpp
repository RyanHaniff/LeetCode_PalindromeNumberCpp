#include "Palindrome.h"
#include <string>
#include<iostream>
using namespace std;

// reference: https://www.code-recipe.com/post/palindrome-number

Palindrome::Palindrome() {

}

bool Palindrome::isPalindrome(int x) {

	// if x % 10 = 0 and x is not equal 0 then its not a palindrome
	if (x < 0 || (x % 10 == 0 && x != 0)) {
		return false;
	}

	int reverse = 0;

	while (x > reverse) {
		int lastDigit = x % 10; // gets the last digit
		reverse = 10 * reverse + lastDigit; // reverse
		x = x / 10; //removes the last digit from the back of the number
	}

	// If reverse equals x return true, or if odd remove the last value
	return (x == reverse || x == reverse / 10);

}


int main() {

	Palindrome pal;

	cout << pal.isPalindrome(1221);

	return 0;
}