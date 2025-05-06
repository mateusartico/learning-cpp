#include <iostream>
using namespace std;

int main() {
	bool isCodingFun = true;
	bool isFishTasty = false;
	cout << isCodingFun << endl; // Outputs 1 (true)
	cout << isFishTasty << endl; // Outputs 0 (false)

	int x = 10;
	int y = 9;
	cout << (x < y) << endl; // Outputs 0 (false)
	cout << (10 > 9) << endl; // Outputs 1 (true)
	cout << (x == 10) << endl; // Outputs 1 (true)

	// Real-life example
	int myAge = 25;
	int votingAge = 18;
	cout << (myAge >= votingAge) << endl;

	return 0;
}
