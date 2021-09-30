#include <iostream>

using namespace std;

int main() {

   double payRate;
   double hoursWorked ;
   double beforeTaxes;
   double afterTaxes;
   double clothingCost;
   double schoolSuppliesCost;
   double savingsBonds;
   double remainingMoney;
   double parentsBonds;
   cout << "Enter your hourly wage:";
   cin >> payRate;
   cout << endl;
   cout << "Enter the hours worked per week:";
   cin >> hoursWorked;
   cout << endl;
   beforeTaxes = hoursWorked * payRate * 5;
   cout << "Your total pay before taxes is $" << beforeTaxes << endl;
   afterTaxes = beforeTaxes - beforeTaxes * 0.14;
   cout << "Your total pay after taxes is $" << afterTaxes << endl;
   clothingCost = afterTaxes * .1;
   cout << "The money spent on clothes and accessories is $" << clothingCost << endl;
   schoolSuppliesCost = afterTaxes * .01;
   cout << "The money spent on school supplies is $" << schoolSuppliesCost << endl;
   remainingMoney = afterTaxes - clothingCost - schoolSuppliesCost;
   savingsBonds = remainingMoney * .25;
   cout << "The money spent to buy savings bonds is $" << savingsBonds << endl;
   parentsBonds = savingsBonds * .5;
   cout << "The money your parents spent to buy additional savings bonds for you is $" << parentsBonds << endl;

    return 0;
}
