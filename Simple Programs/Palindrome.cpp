#include <iostream>

using namespace std;

int main() {

	string userInput;
	bool isPalindrome = 1;
	
	cout << "Enter a word that will be checked to see if it's a palindrome: ";
	cin >> userInput;

	int n = userInput.length();

	for (int i = 0; i <= n / 2.0; i++) {
		if (userInput[i] != userInput[n - 1 - i]) {
			isPalindrome = false;
		}
	}	

	cout << userInput;

	if (isPalindrome == true) {
		cout << " is ";
	}
	else {
		cout << " is not ";
	}

	cout << "a palindrome.\n";

	return 0;
}