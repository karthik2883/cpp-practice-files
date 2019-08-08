#include <iostream>

using namespace std;

int main() {
	string sentence = "This is a string!";

	cout << sentence << endl;

	cout << "This is our output : " << sentence << endl;

	// Concatenation

	sentence += " And this statement is added";
	cout << sentence << endl;

	return 0;
}