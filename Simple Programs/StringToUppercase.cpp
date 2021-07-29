#include <iostream>
#include <string>

using namespace std;

int main() {

	char arr[] = "I am a jumble of words.";

	cout << "The original string is: \"" << arr << "\"\n\n";
	
	for (int i = 0; i < strlen(arr); i++) {
		arr[i] = toupper(arr[i]);
	}

	cout << "The string capitalized is: \"" << arr << "\"\n\n";
	
	cout << endl;
	return 0;
}