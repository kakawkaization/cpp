#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter numerator: ";
    cin >> a;
    cout << "Eneter denominator: ";
    cin >> b;

    if(b)
        cout << "Result: " << a / b << "\n";

    return 0;
}