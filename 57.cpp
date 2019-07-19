#include <iostream>
using namespace std;

int main() {
    double result, n, d;

    cout << "Enter the dividend: ";
    cin >> n;

    cout << "Enter divider: ";
    cin >> d;

    if(d != 0) {
        cout << "Value d not equal 0, division is correct." << "\n";
        result = n / d;
        cout << n << " / " << d << " equal " << result;
    }

    return 0;
}
