#include <iostream>

using namespace std;

int main() {
	//An integer datatype can't hold very big number
	int bob = 45;
	cout << bob << endl;

	long int bob1 = 99999999999999999;
	cout << bob1 << endl;

	short int bob2 = 99999999999999999;
	cout << bob2 << endl;

	long long int bob3 = 9999999999999999;
	cout << bob3 << endl;

	unsigned long long int bob4 = 9999999999999099999;
	cout << bob4 << endl;
	
	//Read article on cplusplus.com
	return 0;
}