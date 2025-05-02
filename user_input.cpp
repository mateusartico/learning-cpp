#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "Type a number: ";
	cin >> a; // cin >> it takes user input and stores the value in a variable
	cout << "Your number is: " << a << endl;

	// Creating a simple calculator
	int x, y;
	int sum;
	cout << "Type a number: ";
	cin >> x;
	cout << "Type another number: ";
	cin >> y;
	sum = x + y;
	cout << "Sum is: " << sum << endl;

	return 0;
}
