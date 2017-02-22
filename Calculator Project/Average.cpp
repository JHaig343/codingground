#include <iostream> //Average finding program-part of calculator's advanced set
#include <iomanip> //Only does 3 numbers right now
#include "Calculator.h"
#include "Calculator_advanced.h" // <--prototype found in advanced header file
using namespace std;
int Average() {
    int first_num;
    int second_num;
    int third_num;
    int average; //variable holding average of 3 numbers
    
    cout << "Type in the first number: " << endl;
    cin >> first_num;
    cout << "Type in the second number: " <<endl;
    cin >> second_num;
    cout << "Type in the third number: " <<endl;
    cin >> third_num;
    average = (first_num + second_num + third_num) / 3;
    cout << "The average is: " << setw(decimal_place) << setfill('0') << average << endl;
}