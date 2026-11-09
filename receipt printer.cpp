//This program is an automatic receipt printer for a sandwich shop. 
//It calculates the total cost of the order first, then calculates the total in pennies and dollars.

//Tyler Blackwood

#include <iostream>
#include <string>

using namespace std;

int main() {
	double sandwichPrice = 5.99, drinkPrice = 2.49, taxRate = 0.075; // Sandwich price, drink price, and tax rate variables 
	int sandwichQuantity = 2, drinkQuantity = 1;
	double subtotal = (sandwichQuantity * sandwichPrice) + (drinkQuantity * drinkPrice);
	bool loyaltyMember = true;
	std::string name = "Alex Johnson"; // customer name
	char sizeCode = 'L';
	
	cout << "Thank you for your order." << endl;
	cout << "Loyalty status verified" << endl;
	cout << "Customer Name" << name << endl;
	cout << "Size" << sizeCode << endl;
	cout << endl;
	
	cout << "Order Details" << endl;
	cout << "Sandwiches (" << sandwichQuantity <<"):$" << sandwichPrice * sandwichQuantity << endl;
	cout << " Drinks (" << drinkQuantity << "): $" << drinkPrice * drinkQuantity  << endl;
	cout << "Subtotal: $" << subtotal << endl;
	cout << "Tax: $" << subtotal * taxRate << endl;
	cout << "Total: $" << subtotal + (subtotal * taxRate) << endl;
	
	int totalInPennis = static_cast<int>((subtotal + (subtotal *taxRate))* 100 + 0.5); //total rounded to the nearest penny
	int dollars = totalInPennis / 100; //total dollars
	int cents = totalInPennis % 100; //cent remainder
	
	cout << "Total in pennies: " << totalInPennis << endl;
	cout << "Total: $" << dollars << "." << cents << endl;
	
	return 0;
	
}