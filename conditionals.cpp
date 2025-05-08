#include <iostream>
#include <string>
using namespace std;

int main(void) {
    // Simple if statement: checks if 20 is greater than 18
    if (20 > 18) {
        cout << "20 is greater than 18" << endl;
    }

    // Comparing two variables using if
    int x = 20;
    int y = 18;
    if (x > y) {
        cout << "x is greater than y" << endl;
    }

    // if-else statement: outputs different messages based on the time
    int time = 20;
    if (time < 18) {
        cout << "Good day." << endl;
    } else {
        cout << "Good evening." << endl;
    }

    // if-else if-else chain: multiple conditions to check time ranges
    time = 22;
    if (time < 10) {
        cout << "Good morning." << endl;
    } else if (time < 20) {
        cout << "Good day." << endl;
    } else {
        cout << "Good evening." << endl;
    }

    // Ternary operator: a shorthand way to write if-else
    time = 17;
    string result = (time < 18) ? "Good day." : "Good evening."; 
    cout << result << endl;
    
    // Real life example: checking a door code using an if-else statement
    int doorCode = 1234;
    if (doorCode == 1234) {
        cout << "The door is now open." << endl;
    } else {
        cout << "The door remains closed" << endl;
    }

    return 0;
}