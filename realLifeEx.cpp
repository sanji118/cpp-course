#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main(){
    int items = 50;
    double cost_per_item = 9.99;
    char currency = '$';
    double total_cost = items * cost_per_item;

    cout << "Number of items: " << items << "\n";
    cout << "Cost per item: " << cost_per_item << "" << currency << "\n";
    cout << "Total cost = " << total_cost << "" << currency << "\n";
}