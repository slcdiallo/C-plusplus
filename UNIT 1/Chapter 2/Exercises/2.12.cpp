#include <iostream>

using namespace std;

int main() {
  int numbers;
  int remainder;
  int elapTimeSec;
  int elapTimeMin;
  int elapTimeHours;

  cout << "Enter elapsed time in seconds for an event" << endl;
  cin >> numbers; 
  cout << endl;
  elapTimeHours = numbers / 3600;
  remainder = numbers % 3600;
  elapTimeMin = remainder / 60;
  elapTimeSec = remainder % 60;

  cout << "The elapsed time is " << elapTimeHours << ":" << elapTimeMin
        << ":" << elapTimeSec << endl;

    return 0;
}
