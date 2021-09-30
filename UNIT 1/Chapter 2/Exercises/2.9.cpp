#include <iostream>

using namespace std;

int main() {
    double testScore1;
    double testScore2;
    double testScore3;
    double testScore4;
    double testScore5;
    double averageTest;

    cout << "Enter five test scores" << endl;
    cin >> testScore1 >> testScore2 >> testScore3 
        >> testScore4 >> testScore5;
    cout << endl;
    averageTest = (testScore1 + testScore2 + testScore3 + testScore4 + testScore5) /5;
    cout << "Your average test score is : " << averageTest << endl;

    return 0;
}
