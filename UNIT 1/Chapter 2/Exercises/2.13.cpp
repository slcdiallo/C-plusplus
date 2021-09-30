#include <iostream>

using namespace std;

int main() 
{
    double originalPrice;
    double percentagePrice;
    double salesTax;
    double salesTaxRate;
    double sellingPrice;
    double finalPrice;

    cout << "Enter original price of the item" << endl;
    cin >> originalPrice;
    cout << endl;

    cout << "Enter the percentage of the marked-up price" << endl;
    cin >> percentagePrice;
    cout << endl;

    cout << "Enter the sales tax rate" << endl;
    cin >> salesTaxRate;
    cout << endl;

    sellingPrice = originalPrice * (1 + percentagePrice/100);
    salesTax = sellingPrice * (salesTaxRate / 100);
    finalPrice = sellingPrice + salesTax;

    cout << "The original price of the item: " << originalPrice << endl;
    cout << "The percentage of mark up: " << percentagePrice << endl;
    cout << "The store selling price of the item: " << sellingPrice << endl;
    cout << "The sales tax rate: " << salesTaxRate << endl;
    cout << "The sales tax of the item: " << salesTax << endl;
    cout << "The final price of the item: " << finalPrice << endl;
    

    return 0;
}
