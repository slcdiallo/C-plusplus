#include <iostream>

using namespace std;

int main()
{
  double students; 
  double calRequired; 
  double calNut;
  double calFruit;
  double calTotal; 
  double nutTotal; 
  double fruitTotal;
  
  cout << "Enter the number of students: "<< endl;
  cin >> students;
  
  cout << "Enter the number of calories required for each student: " << endl;
  cin >> calRequired;
  
  cout << "Enter the calories in each pound of nuts: " << endl;
  cin >> calNut;
  
  calTotal = students * calRequired;
  calFruit = calNut / 0.70;
  nutTotal = calTotal / calNut;
  fruitTotal = calTotal / calFruit;
  
  cout << "The total amount of nuts needed is " << nutTotal << endl;
  
  cout << "The total amount of fruit needed is " << fruitTotal << endl;
  
  return 0;
}
