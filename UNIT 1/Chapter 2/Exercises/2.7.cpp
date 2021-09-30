#include <iostream>

using namespace std;

int main() {
    double decimalNum;
    int roundNum;
    cout << "Input a decimal number" << endl;
    cin >> decimalNum;
    cout << endl;
    roundNum = decimalNum + 0.5;
    cout << "The nearest rounded number : " << roundNum << endl;

    
    return 0;
}
