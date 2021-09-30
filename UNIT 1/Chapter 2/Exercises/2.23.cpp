#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double SERVICE_CHARGE = 0.015;
    int sharesSold;
    double purchasePrice;
    double salePrice;
    double totalCharges;
    double amountInvested;
    double netAmount;
    
    cout << "How many shares did you sell? ";
    cin >> sharesSold;
    cout << "What was the purchase price? $";
    cin >> purchasePrice;
    cout << "What was the selling price of the share? $";
    cin >> salePrice;
    
    amountInvested = sharesSold * purchasePrice;
    totalCharges = (sharesSold * salePrice) * SERVICE_CHARGE;
    netAmount = (sharesSold * salePrice) - (totalCharges + amountInvested);
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "Amount invested: $" << amountInvested << endl;
    cout << "Service charges: $" << totalCharges << endl;
    cout << "Amount gained / lost: $" << netAmount << endl;
    
    return 0;
}
