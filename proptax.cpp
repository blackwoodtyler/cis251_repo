#include <iostream>
#include <iomanip>
using namespace std;

int main () { 
    //values for poperty value, assessed value, property tax and rate
    double propVal, assessVal, propTax, taxRate = 0.6;
    
    //prompt for property value before assessment
    cout << "Enter the property value (no comma): ";
    cin >> propVal;
    
    //value assessment and property tax calculation
    assessVal = propVal * taxRate; 
    propTax = assessVal * 0.0075;
    
    cout << endl;
    
    //output stream
    std::cout << std::fixed << std::setprecision(2);
    cout << "The assessed value is: $" << assessVal << endl;
    cout << "The property tax is: $" << propTax << endl;
    
    return 0;
}