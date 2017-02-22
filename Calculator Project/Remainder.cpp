#include <iostream> //Remainder finding program-part of Calculator's advanced set
#include <iomanip>
#include "Calculator.h"
#include "Calculator_advanced.h"//<--prototype found in advanced header file
using namespace std;
int Remainder(){
    int first_num;
    int second_num;
    int remain; //Variable holding remainder
    cout << "Type in the first number: " <<endl;
    cin >> first_num;
    cout << "Type in the second number: " << endl;
    cin >> second_num;
    remain = first_num % second_num;
    cout << "The remainder is: " <<setw(decimal_place) <<setfill('0') << remain << endl;
    
}