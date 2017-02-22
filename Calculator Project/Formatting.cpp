#include <iostream> //Formatting component of calculator
#include <iomanip>
#include "Calculator.h"
using namespace std; 
int decimal_place = 0;
int Formatting() {
    cout << "Type in the number of decimal places to go to: " <<endl;
    cin >> decimal_place;
    cout << "The calculator will now go to " << decimal_place << " decimal places" << endl;
    return decimal_place;
}
/*Managed to add 0s in front of number; was not able to add 0s after number
or make it go to decimal points. Byproduct of using integer instead of double.

*/