#include <iostream> //Addition function of Calculator program
#include <iomanip>
#include "Calculator.h"
using namespace std;

int Addition() {
    bool live = true; //sentinel variable for while loop
    while (live == true){ 
    int first_number; 
    int second_number; 
    int sum;
    cout << "Type in the first number to add(-99 to exit): " << endl;
    cin >> first_number;
    if (first_number == -99){ //User inputs the Sentinel value (-99);
        break;//loop breaks
    }
    else {
    cout << "Type in the second number to add: " << endl;
    cin >> second_number;
    sum = first_number + second_number; //program outputs sum of inputted numbers
    cout << "Your sum is: "<<setw(decimal_place) <<setfill('0') << sum << endl;
    
    }
    
    }
}