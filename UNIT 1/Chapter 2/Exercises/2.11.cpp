#include <iostream>

using namespace std;                                   
 
int main()
{
  double capGal;
  double mileGal;
  double numMile;

  cout <<"Enter the capacity in gallons" << endl;
  cin >> capGal;
  cout << endl;
  cout <<"Enter the miles per gallons" << endl;
  cin >> mileGal;
  cout << endl;
  numMile = mileGal * capGal;
  cout << "The number of miles the automobile can be driven without refueling is: " << numMile << endl;

    return 0;
}
