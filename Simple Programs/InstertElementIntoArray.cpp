#include <iostream>

using namespace std;

int main() {

	int arr[15] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };		
	int size = 10;											
	int insrtPos = 4;										

	for (int i = size++; i > insrtPos; i--) {
		arr[i] = arr[i - 1];
	}

	arr[insrtPos] = 2;

	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}