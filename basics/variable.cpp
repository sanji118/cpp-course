#include <iostream>
#include<conio.h>
#include <string>
using namespace std;

int main(){
    int myNum = 5;//Stores whole numbers, without decimals

    float myFloatNum = 5.99; //Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits

    double myDoubleNum = 5.99898764445;//Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
    
    char myLetter = 'd';
    string myString = "Hello";
    bool myBoolean = true;

    //print variables 

    cout << "int: " << myNum << "\n";
    cout << "float: " << myFloatNum << "\n";
    cout << "double: " << myDoubleNum << "\n";
    cout << "char: " << myLetter << "\n";
    cout << "bool: " << myBoolean << "\n";
    cout << "string: " << myString << "\n";
}