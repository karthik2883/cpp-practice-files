//This program only familiarizes you with variables and not data types

#include <iostream>

using namespace std;

int main() {
	int a, b;

	//Let's see what a and b hold, they haven't been assigned any value yet, so they must be having junk value

	cout << "Enter a number: " << endl;
	cin >> a;

	cout << "Enter another number: " << endl;
	cin >> b;

	int sum = a + b;

	cout << "The sum is " << sum << endl;
	return 0;
}