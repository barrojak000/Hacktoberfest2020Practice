#include <iostream>

using namespace std;

int main() {
	int a;

	cout << "Enter a number between 1 and 3: ";
	cin >> a;

	if (a == 1) {
		cout << "\nThis outocme is the \"if\" portion of the if-else.";
	}
	else if (a == 2) {
		cout << "\nThis outocme is the \"else if\" portion of the if-else.";
	}
	else if (a == 3) {
		cout << "\nThis outocme is the \"else if\" portion of the if-else.";
	}
	else {
		cout << "\nInvalid input.";
		cout << "\nThis outocme is the \"else\" portion of the if-else.";
	}

	cout << endl;
	return 0;
}