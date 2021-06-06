#include <iostream>

using namespace std;

int main() {

	int a;

	cout << "Enter in a number: ";
	cin >> a;

	if (a % 2 == 0) {
		cout << "\n" << a << " is even!";
	}
	else {
		cout << "\n" << a << " is odd!";
	}

	cout << endl;
	return 0;
}