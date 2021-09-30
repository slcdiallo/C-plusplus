#include <iostream>

using namespace std;
const double GRAVITATIONAL_CONSTANT = 6.67E-8;

int main() {
    double mass1;
    double mass2;
    double dist;
    double force;
    cout << "Enter mass 1" << endl;
    cin >> mass1;
    cout << endl;
    cout << "Enter mass 2" << endl;
    cin >> mass2;
    cout << endl;  
    cout << "Enter distance between bodies" << endl;
    cin >> dist;
    cout << endl;       
    force = ( ( mass1 * mass2 ) / ( dist * dist ) ) * GRAVITATIONAL_CONSTANT;
    cout << "The force between the bodies is " << force << endl;

    return 0;
}
