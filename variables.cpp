#include <iostream>
using namespace std;

int main() {
	// Declare variables
	int myNumA = 15;	// myNumA is 15
	cout << myNumA << endl;	// Outputs 15
	myNumA = 10;		// Now myNumA is 10
	cout << myNumA << endl;	// Outputs 10

	int myNumB;
	myNumB = 15;
	cout << myNumB << endl;
	
	int myNumC = 5;		  // Integer (without decimals)
	double myFloatNum = 5.99; // Floating point number (with decimals)
	char myLetter = 'D';	  // Character
	string myText = "Hello";  // String (text)
	bool myBoolean = true;	  // Boolean (true or false)
	
	int myAge = 17;
	cout << "I am " << myAge << " years old." << endl;

	int i = 5;
	int j = 6;
	int sum = i + j;
	cout << sum << endl;

	// Declare multiple variables
	int x = 5, y = 6, z = 50;	// Declaring variables of the same type
	cout << x + y + z << endl;

	int a, b, c;
	a = b = c = 10;			// Assign the same value to multiple variables in one line
	cout << a + b + c << endl;

	// Identifiers
	int minutesPerHour = 60; // This name is good
	int m = 60;		 // This name is bad
	
	// Constants
	const string myName = "Mateus"; // myName will always be Mateus
	
	// Real-life example
	// Calculate the area of a rectangle
	int length = 6;
	int width = 3;

	int area = length * width;

	cout << "Length is " << length << endl;
	cout << "Width is " << width << endl;
	cout << "Area of rectangle is " << area << endl;

	return 0;
}
