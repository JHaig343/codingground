#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num; //The number user inputs
    int field_width; //specifying field width
    char x;
    cout <<"Enter a number: "<< endl;
    cin >> num;
    cout << "What field width do you want?" << endl;
    cin >> field_width;
    cout << "Select your fill character" << endl;
    cin >> x;
    cout << '*' << setw(field_width) << setfill(x) << num << '*' << endl;
  
   
   return 0;
}

