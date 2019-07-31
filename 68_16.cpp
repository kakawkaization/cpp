#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;

    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter number 2 ";
    cin >> num2;

    cout << "Enter number 3: ";
    cin >> num3;

    cout << "Enter number 4: ";
    cin >> num4;

    cout << "Enter number 5: ";
    cin >> num5;

    cout << "The mean absolute value is " <<
        abs((num1 + num2 + num3 + num4 + num5) / 5) << "\n";

    return 0;
}
