#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main(){
    int x;
    cout << "type a number = ";
    cin >> x ;
    x |= 3; //Bitwise or 
    cout << x << endl;
    x ^= 3; //Binary XOR
    cout << x << endl;
    x >>= 3; //Shifts the value to right by the number of bits specified by the right operand.
    cout << x << endl;
    x <<= 3; //Shifts the value to left by the number of bits specified by the right operand.
    cout << x << endl;
    return 0;
}