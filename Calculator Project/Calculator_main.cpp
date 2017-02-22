#include <iostream>
#include <iomanip>
#include "Calculator.h"//Including the header file
#include "Calculator_advanced.h" //file for advanced functions
using namespace std;
//Calculator project by Jacob Haig

int main()
{
    int operation;
   cout << "Welcome to the Calculator!" << endl;
   cout << "1. Addition" << endl;
   cout << "2. Subtraction" << endl;
   cout << "3. Multiplication" << endl;
   cout << "4. Division" << endl;
   cout << "5. Advanced" << endl;
   cout << "6. Formatting" << endl;
   cout << "7. Exit" << endl;
   cout << "What operation would you like to perform?" << endl;
   cin >> operation;
   switch(operation){ //switch system for choosing operation
       case 1 : //Addition
       Addition();
       main();
       break;
       
       case 2 : //Subtraction
       Subtraction();
       main();
       break;
       
       case 3 : //Multiplication
       Multiplication();
       main();
       break;
       
       case 4 : //Division
       Division();
       main();
       break;
       
       case 5: //Selecting Advanced options
       int advanced_operation;
       cout << "1. Average" <<endl;
       cout << "2. Remainder" <<endl;
       cout << "3. Exit" <<endl;
       cout << "What operation would you like to perform?" << endl;
       cin >> advanced_operation;
       switch(advanced_operation){
           
           case 1 : //Average
           Average();
           main();
           break;
           
           case 2 : //Remainder
           Remainder();
           main();
           break;
           
           case 3 : //Exiting Advanced
           main();
           break;
       }
       case 6: //Setting the Formatting
       Formatting();
       main();
       break;
       
       case 7: //User exits
       break;
       
       default : 
       cout << "I don't understand that!" << endl;
       break;
       
   }
  
   
   
   return 0;
}

