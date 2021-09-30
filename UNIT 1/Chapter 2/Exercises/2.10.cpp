#include <iostream>
#include <string>
using namespace std;

int main() 
{
    double num1;
    double num2;
    double num3;
    double num4;
    double num5;
    int Sum;

    cout << "Enter five decimal numbers" << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    cout << endl;

    Sum = num1 + num2 + num3 + num4 + num5 + 0.5;
    cout <<"The sum is: " << Sum << endl;
   
    return 0;
}
