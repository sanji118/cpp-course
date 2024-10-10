#include <iostream>
#include <conio.h>
#include <cmath>
#include <string>
using namespace std;


int main(){
    float pi;
    pi = 3.1416;
    float radius;
    cin >> radius;
    float volume = (4/3)* pow(radius, 3) *pi;
    cout << "Volume is:" << volume << endl;
}