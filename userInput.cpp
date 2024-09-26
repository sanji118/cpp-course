#include <iostream> //Both cin and cout belongs to the <iostream> library   
#include<conio.h>
#include <string>

using namespace std;

int main(){
    int x, y;
    int sum;
    cout << "Type First number: ";
    cin >> x;
    cout << "Type second number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum;
}