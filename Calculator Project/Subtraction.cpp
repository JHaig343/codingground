#include <iostream> //Subtraction function for Calculator function
#include <iomanip>
#include "Calculator.h"
using namespace std;

int Subtraction(){
    bool live = true; //Sentinel variable
    while (live == true){
        int first_number;
        int second_number;
        int difference; //
        cout << "Type in the number being subtracted from(-99 to exit): " << endl;
        cin >> first_number;
        if (first_number == -99){ //User inputs Sentinel value
            break; //loop breaks
            
        }
        else {
            cout << "Type in the number to subtract:" << endl;
            cin >> second_number;
            difference = first_number - second_number;
            cout << "The difference is: " <<setw(decimal_place) <<setfill('0') << difference << endl;
        }
        
    }
}