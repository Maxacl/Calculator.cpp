#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int num1, num2, result;
	char op;

	cout << "Enter the first number: ";
	cin >> num1;

	cout << "Enter the operator : ";
	cin >> op;

	cout << "Enter the second number: ";
	cin >> num2;

	if (op == '+') {
		result = num1 + num2;
		cout << result;
	}
	else if (op == '-') {
		result = num1 - num2;
		cout << result;
	}
	else if (op == '/') {
		result = num1 / num2;
		cout << result;
	}
	else if (op == '*') {
		result = num1 * num2;
		cout << result;
	}
	else {
		cout << "Invalid operator";
	}

	return 0;
}