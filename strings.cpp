#include <iostream>
#include <string> // Include the string library to use string objects
using namespace std; // Allows using standard library features without 'std::' prefix

int main() {
	string greeting = "Hello";

    	string firstName = "John";
    	string lastName = "Wick";
    	string fullName = firstName + " " + lastName; // Concatenate strings using the addition (+) operator
    	cout << fullName << endl;

    	firstName.append(" "); // 'append' adds content to the end of the string
    	fullName = firstName.append(lastName); // Append lastName to firstName
    	cout << fullName << endl;

    	string x = "10";
    	string y = "20";
    	cout << x + y << endl; // This results in the string "1020"

    	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    	cout << "The length of the alphabet string is: " << alphabet.length() << endl; // 'length' returns the number of characters
    	cout << "The length of the alphabet string is: " << alphabet.size() << endl;   // 'size' is an alias for 'length'

    	cout << greeting[0] << endl;         // Access character by index
    	cout << greeting.at(0) << endl;      // Access character using 'at()' method (safe version)
    	greeting[0] = 'J';                   // Modify character at index 0
    	cout << greeting << endl;

    	string textEmail = "Hello, Peter,\nHow\'s it going?"; // \n is a line break
    	cout << textEmail << endl;

    	string messageInTheBottle = "We are the so-called \"Vikings\" from the north."; // \" escapes double quotes
    	cout << messageInTheBottle << endl;

    	string textBackslash = "The character \\ is called backslash. And tab is \\t."; // \\ escapes backslash, \\t is a tab
    	cout << textBackslash << endl;

    	cout << "What's your full name? ";
    	cin >> fullName; // This only captures one word (stops at the first space)
    	cout << "Your name is " + fullName << endl;

    	cout << "What's your full name? ";
    	cin.ignore(); // Ignore leftover newline character from previous input
    	getline(cin, fullName); // 'getline' reads the full line, including spaces
    	cout << "Your name is " + fullName << endl;

    	char classmateFirstName[] = "Mateus"; // C-style string (array of characters)
    	cout << classmateFirstName;

    	return 0;
}
