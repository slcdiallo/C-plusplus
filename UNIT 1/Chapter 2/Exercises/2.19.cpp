#include <iostream>

using namespace std;

int main() {
    double quarters;
    double dimes;
    double nickels;
    double pennies;

    cout << "Enter the number of quarters" << endl;
    cin >> quarters;
    cout << endl;
    cout << "Enter the number of dimes" << endl;
    cin >> dimes;
    cout << endl;
    cout << "Enter the number of nickels" << endl;
    cin >> nickels;
    cout << endl;
    cout << "Enter the number of pennies" << endl;
    cin >> pennies;
    cout << endl;

    pennies = (quarters * 25) + (dimes * 10) + (nickels*5) + pennies;
    cout << "The total value of the coins in pennies is " << pennies << endl;

    return 0;
}
