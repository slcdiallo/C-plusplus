#include <iostream>

using namespace std;
const double PI = 3.1416;
int main() {
    double wireLength;
    double radius;
    double area;

    cout << "Input length of wire" << endl;
    cin >> wireLength;
    cout << endl;
    
    radius = wireLength / ( 2 * PI );
    area = PI * radius * radius;

    cout << "The radius is " << radius << endl;
    cout << "The area is " << area << endl;


    return 0;
}
