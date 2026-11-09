#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float Electricity, Water, Gas, Misc, Total;
    std::string date;

    //calculates the total
    cout << "Enter the month and year for this report. (Ex. June 2026, Sept,2026)" << endl;
    getline(cin, date);
    cout << "Please enter the amount for your utility bills." << endl;
    cout << "Electricity: $";
    cin >> Electricity;
    cout << "Water: $";
    cin >> Water;
    cout << "Gas: $";
    cin >> Gas;
    cout << "Miscellaneous (If not applicable, enter 0): $";
    cin >> Misc;
    
    //calculates grand total
    
    Total = Electricity + Water + Gas + Misc;
    
    //lists the month, year, individual bills, and total
    
    cout << endl;
    std::cout << std::left << std::setw(20) << date << "Utilities" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Elec.    Water    Gas     Misc.   Total" << endl;
    std::cout << "$" << std::fixed << std::setprecision(2) << Electricity << "    $" << std::fixed << std::setprecision(2) << Water << "    $" << std::fixed << std::setprecision(2) << Gas << "    $" <<std::fixed << std::setprecision(2) << Misc << "    $" << std::fixed << std::setprecision(2) << Total << "" << endl;

    return 0;
}