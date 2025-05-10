#include <iostream>
using std::cout, std::cin, std::endl;

int main(void){
    int day_number;
    cout << "What's the day you want to print? ";
    try{
        cin >> day_number;
    } catch (...){
        cout << "Invalid number.";
    }
    switch(day_number){
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Invalid number";
            break;
    }
    cout << endl;
}