#include <iostream>

using namespace std;
const double PI = 3.141593;

int main() 
{
    double pricePsi;
    double radius;
    double price;
    double area;

    cout << "Enter the radius of the pizza: " << endl;
    cin >> radius;
    cout << endl;
    cout << "Enter the price of the pizza: " << endl;
    cin >> price;
    cout << endl;
    area = PI * radius * radius;
    pricePsi = price / area;

    cout << "The price per square inch is " << pricePsi << endl;

    
    return 0;
}
