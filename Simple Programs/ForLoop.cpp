#include <iostream>

using namespace std;

int main() {
	int i;
	int x;

	cout << "Enter how many times you would like the loop to run: ";
	cin >> x;

	for (i = 0; x > i; ++i) {
		cout << "This loop has ran " << i + 1 << " time(s).\n";
	}

	cout << endl;
	return 0;
}