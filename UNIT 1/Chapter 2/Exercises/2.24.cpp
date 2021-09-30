#include <iostream>

using namespace std;

int main()
{

double length;
double width;
double Lengthofwire;

cout << "Input the length of the wire:";
cin >> Lengthofwire;
cout << endl;

// formula to get length and width for picture frame
width = Lengthofwire / 5;
length = 1.5 * width;

cout << "length = " << length << endl;
cout << "width= " << width << endl;

return 0;


}
