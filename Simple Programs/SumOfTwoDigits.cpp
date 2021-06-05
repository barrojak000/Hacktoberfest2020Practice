#include <iostream>

using namespace std;

int main() {
	int a, b;
	int sum;

	cout << "Enter a number between 0 and 9: ";
	cin >> a;

	if (a < 0 || a > 9) {								// Used to check if between 0 and 9
		cout << "\nInvalid input!\n";					// Has room for one error, code can 										
		cout << "\nEnter a number between 0 and 9: ";	// be adjusted to make room for more
		cin >> a;
	}

	cout << "Enter anohter number between 0 and 9: ";
	cin >> b;

	if (b < 0 || b > 9) {
		cout << "\nInvalid input!\n";

		cout << "\nEnter a number between 0 and 9: ";
		cin >> b;
	}

	sum = a + b;

	cout << endl << a << " + " << b << " = " << sum;

	cout << endl;
	return 0;
}