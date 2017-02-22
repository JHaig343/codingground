#include <iostream> //Multiplication function of Calculator program
#include <iomanip>
#include "Calculator.h"
using namespace std;
int Multiplication(){
    bool live = true; //variable for while loop
    while(live == true){
        int first_number;
        int second_number;
        int product; 
        cout << "Type in the first number to multiply(-99 to exit): " << endl;
        cin >> first_number;
        if(first_number == -99){ //loop breaks
            break;
        }
        else{
            cout << "Type in the second number to multiply: " << endl;
            cin >> second_number;
            product = first_number * second_number;
            cout << "Your product is " <<setw(decimal_place) <<setfill('0') << product << endl;
            
        }
    }
}
