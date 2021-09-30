/*
Exercise 2-26 Paint Room
A room has one door, two windows, and a built-in bookshelf and it needs to be painted. Suppose that one gallon of paint can paint 120 square feet.

Write a program that prompts the user to input the lengths and widths (in feet) of:

The door
Each window
The bookshelf
And the length, width, and height of the room.
The program outputs:

The amount of paint needed to paint the walls of the room.
*/

#include <iostream>

using namespace std;

int main()
{
  double rLength, rWidth, rHeight, rTotal;
  double wLength, wWidth, wTotal;
  double wLength2, wWidth2, wTotal2;
  double bookLength, bookWidth, bookTotal;
  double dLength, dWidth, dTotal;
  double totalGallons;
   
  cout << "Enter the Door's Length: ";
    cin >> dLength;
    
  cout << "Enter the Door's Width: ";
    cin >> dWidth;
    
  cout << "Enter the Window's Length: ";
    cin >> wLength;
    
  cout << "Enter the Window's Width: ";
    cin >> wWidth;
  
  cout << "Enter the 2nd Window's Length: ";
    cin >> wLength2;
    
  cout << "Enter the 2nd Window's Width: ";
    cin >> wWidth2;
    
  cout << "Enter the Bookshelf's Length: ";
    cin >> bookLength;
    
  cout << "Enter the Bookshelf's Width: ";
    cin >> bookWidth;
  
     cout << "Enter the room's Length: ";
    cin >> rLength;
    
  cout << "Enter the room's Width: ";
    cin >> rWidth;
    
  cout << "Enter the room's Height: ";
    cin >> rHeight;
    
rTotal = ((rLength * rHeight)*2) + ((rWidth * rHeight)*2);
dTotal = dLength * dWidth;
wTotal = wLength * wWidth;
wTotal2 = wLength2 * wWidth2;
bookTotal = bookLength * bookWidth;
totalGallons = (rTotal - dTotal - wTotal - wTotal2 - bookTotal)/120;

  cout << "The totals gallon's of paint needed: " << totalGallons << endl;
    
    return 0;
}
