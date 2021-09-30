#include <iostream>

using namespace std;
const double CAP_MILK = 3.78;
const double COST_PER_LITER = 0.38;
const double PROFIT_PER_CARTON = 0.27;

int main() 
{
    double producedMilk;
    int numCartons;
    double totalCost;
    double totalProfit;

    cout << "Enter the total amount of milk produced in the morning (liters)" << endl;
    cin >> producedMilk;
    cout << endl;

    numCartons = static_cast<int>(producedMilk / CAP_MILK + 0.5);
    totalCost = producedMilk * COST_PER_LITER;
    totalProfit = numCartons * PROFIT_PER_CARTON;



    cout << "Number of milk cartons: " << numCartons << endl;
    cout << "Cost of producing milk: " << totalCost << endl;
    cout << "Profit for producing milk: " << totalProfit << endl;
    
    return 0;
}
