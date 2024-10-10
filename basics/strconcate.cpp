#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main(){
    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName + " "+ lastName;
    cout << fullName << endl;
    string fullName2 = firstName.append(lastName);
    cout << fullName2 << endl;
    string txt = "Hello World!";
    cout << txt.at(0);//string.at(index);
    cout << txt.at(txt.length() - 1) << endl;
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() << endl;//string.length();
    return 0;
}

//The + operator can be used between strings to add them together to make a new string. This is called concatenation

/**
 *  1.find()  1st occurrence of a string or     character
    2.rfind()	Returns the index (position) of the last occurrence of a string or character
    3.replace()	Replaces a part of a string with another string
    4.insert()	Inserts a string at a specified index (position)
    5.erase()	Removes characters from a string
    6.compare()	Compares two strings*/