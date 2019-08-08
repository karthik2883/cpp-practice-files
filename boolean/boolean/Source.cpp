#include <iostream>

using namespace std;

int main() {
	bool flag = true;
	int a; //Let's check if this number is prime

	cout << "Enter any number : " << endl;
	a = cin.get();

	for (int i = 2; i < a / 2; i++) {
		if (a % i == 0) {
			flag = !flag;
			break;
		}
	}

	if (flag == false) {
		cout << "The number is not prime.";
	}
	else {
		cout << "The number is prime";
	}
	return 0;
}