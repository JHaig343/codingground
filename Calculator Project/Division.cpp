 #include <iostream> //Division component of calculator
 #include <iomanip>
 #include "Calculator.h"
 using namespace std;
 int Division(){
    bool live = true;
    while (live == true){
        int first_number;
        int second_number;
        int difference;
        cout << "Type in the number being divided(-99 to exit): " << endl;
        cin >> first_number;
        if (first_number == -99){
            break;
        }
        else{
            cout << "Type in the number to divide by: " << endl;
            cin >> second_number;
            difference = first_number / second_number;
            cout << "The difference is " <<setw(decimal_place) <<setfill('0') << difference << endl; 
        }
    }
 }