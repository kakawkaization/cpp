#include <iostream>
using namespace std;

int main() {
    double f;
    double m;

    cout << "Enter length in foot: ";
    cin >> f;

    m = f / 3.28;
    cout << f << " foot equal " << m << " meters.";

    return 0;
}
