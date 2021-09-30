#include <iostream>
#include <string>
using namespace std;

int main()
{
  string name;
  double studyHours;
  cout << "Please enter a name" << endl;
  cin >> name;
  cout << endl;
  cout << "Please enter a value" << endl;
  cin >> studyHours;
  cout << endl;
  cout << "Hello, " << name << "!" <<" On Saturday, you need to study " << studyHours << " hours for the exam." << endl;

return 0;
}
