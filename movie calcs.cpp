#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main (){
    //variables
    double adultTixPrice = 12.00, childTixPrice = 7.00, smallPopPrice = 4.50, largePopPrice = 6.00, drinkPrice = 3.00, tax, taxRate = 0.08, subtotal, total;
    float adultTix, childTix, smallPop, largePop, drink;
    //snack bar menu header
    cout << "Welcome to the Snack Bar." << endl;
    cout << endl;
    cout << "Menu" << endl;
    cout << "=================" << endl;
    cout << endl;
    cout << "Tickets" << endl;
    //adult and child tickets
    cout << endl;
    std::cout << std::fixed << std::setprecision(2) << "Adult Ticket: $" << adultTixPrice << endl;
    std::cout << std::fixed << std::setprecision(2) << "Child Ticket: $" << childTixPrice << endl;
    cout << endl;
    //snacks
    cout << "Snacks" << endl;
    cout << endl;
    std::cout << std::fixed << std::setprecision(2) << "Small Popcorn: $" << smallPopPrice << endl;
    std::cout << std::fixed << std::setprecision(2) << "Large Popcorn: $" << largePopPrice << endl;
    std::cout << std::fixed << std::setprecision(2) << "Soft Drinks: $" << drinkPrice << endl;
    cout << endl;

    //ask user for ticket amounts
    cout << "Please enter the number of adult tickets. (Enter 0 if not applicable.)" << endl;
    cin >> adultTix;
    cout << "Please enter the numder of child tickets. (Enter 0 if not applicable.)" << endl;
    cin >> childTix;
    cout << endl;

    //ask user for snacks
    cout << "Please choose the snacks and amounts you want. (Enter 0 if not applicable)" << endl;
    cout << "Small popcorn: " << endl;
    cin >> smallPop;
    cout << "Large popcorn: " << endl;
    cin >> largePop;
    cout << "Drinks: " << endl;
    cin >> drink;
    
    //calculations
    subtotal = smallPop * smallPopPrice + largePop * largePopPrice + drink * drinkPrice + adultTix * adultTixPrice + childTix * childTixPrice;
    tax = subtotal * taxRate;
    total = subtotal + tax;

    //print total
    cout << endl; 
    cout << "==================" << endl;
    cout << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Total: $" << total << endl;

    cout << endl;
    cout << "Please enjoy your movie!";

    return 0;
}