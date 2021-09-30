#include <iostream>

using namespace std;
const double CAP_MILK = 3.78;
int main() 
{
  double producedMilk;
  double costPerLiter;
  double profitPerCarton;
  int numCartons;
  double totalCost;
  double totalProfit;
  cout << "Enter the total amount of milk produced in the morning (liters)" << endl;
  cin >> producedMilk;
  cout << endl;
  cout << "Enter the cost of producing one liter of milk" << endl;
  cin >> costPerLiter;
  cout << endl;
  cout << "Enter the profit on each carton of milk" << endl;
  cin >> profitPerCarton;
  cout << endl;
  numCartons = static_cast<int>(producedMilk / CAP_MILK + 0.5);
  totalCost = producedMilk * costPerLiter;
  totalProfit = profitPerCarton * numCartons;
  cout << "The number of milk cartons needed to hold milk is " << numCartons << endl;
  cout << "The cost of producing milk is $" << totalCost << endl;
  cout << "The profit for producing milk is $" << totalProfit << endl;

  return 0;

}
