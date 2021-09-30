#include <iostream>

using namespace std;

int main() 
{
    double riceAmount;
    double numBags;
    cout << "Enter the amount of rice, in pounds" << endl;
    cin >> riceAmount;
    cout << endl;
    numBags = 2205 / riceAmount;
    cout << "The number of bags needed to store one metric ton of rice is " << numBags << endl;
    
    return 0;
}
