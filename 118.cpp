#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number from 1 to 3: ";
    cin >> num;

    switch(num) {
        case 1:
            cout << "One pie do not eat to times.\n";
            break;
        case 2:
            cout << "Two heads on the same shoulders closely.\n";
            break;
        case 3:
            cout << "Three times forgive, and the fourth is a fancy.\n";
            break;
        default:
            cout << "You must enter number 1, 2 or 3.\n";
    }

    return 0;
}