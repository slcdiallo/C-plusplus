#include <iostream>

using namespace std;

int main() {
    double a;
    double b;
    cout << "Enter the size of the hard drive specified by the manufacturer, on the hard drive bos (in GB) : " << endl;
    cin >> a;
    cout << endl;

    b = (a * 1000000000) / (1024 * 1024 * 1024);
    cout << "Actual storage capacity of the hard drive (in GB) is "<< b << endl;

    return 0;
}
