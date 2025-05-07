#include <iostream>
using namespace std;

int main(void) {
    if (20 > 18) {
        cout << "20 is greater than 18";
    }

    int x = 20;
    int y = 18;
    if (x > y) {
    cout << "x is greater than y";
    }

    int time = 20;
    if (time < 18) {
    cout << "Good day.";
    } else {
    cout << "Good evening.";
    }

    int time = 22;
    if (time < 10) {
    cout << "Good morning.";
    } else if (time < 20) {
    cout << "Good day.";
    } else {
    cout << "Good evening.";
    }



    return 0;
}