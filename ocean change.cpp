//Tyler Blackwood
//This program shows the increase in ocean water level over a period of 25 years

#include <iostream>

using namespace std;

int main() {
    //initialize variables
    double number = 1.5;
    int max_year = 25;
    //show user basic info
    cout << "The ocean rises at a rate of around " << number << " millimeters every year\n";
    cout << endl;
    cout << "Change in oceanic water level\n";
    cout << "===============================" << endl;
    cout << endl;

    double num = 0;
    int year = 1;
    //while loop that is only active until the year value reaches 25
    while (year <= max_year) {

        std::cout << year << "\t\t" << (num += number) << endl;
        year++;
    }

    cout << endl;
    cout << "===============================" << endl;
    cout << "The rise of ocean water levels is due to the melting of the ice caps.\n";

    return 0;
}