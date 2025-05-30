#include <iostream>
#include <string>
using namespace std;

int main() {
	// Numbers
	float f1 = 35e3; // Using e to indicate the power of 10
	double d1 = 12e4;
	cout << f1 << endl;
	cout << d1 << endl;
	
	// Booleans
	bool isCodingFun = true;
	bool isMyBirthday = false;
	cout << isCodingFun << endl;  // Outputs 1 (true)
	cout << isMyBirthday << endl; // Outputs 0 (false)
	
	// Characters
	char myGrade = 'B';
	cout << myGrade << endl;

	char a = 65, b = 66, c = 67; // Using ASCII values to store
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	
	// String
	string greeting = "Hi!";
	cout << greeting << endl;

	// Real-life example
	// Calculate the total purchase value
	int qtdItems = 40;
	double itemValue = 9.99;
	double totalPurchaseValue = qtdItems * itemValue;
	char currency = '$';

	cout << "Number of items: " << qtdItems << endl;
	cout << "Cost per item: " << itemValue << endl;
	cout << "Total: " << currency << totalPurchaseValue << endl;

	return 0;
}
