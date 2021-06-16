#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int number, numSquared;

	cout << "Enter a number to be squared: ";
	cin >> number; 

	numSquared = number * number;

	cout << "\n" <<  number << " * " << number << " = " << numSquared << endl;

	return 0;
}