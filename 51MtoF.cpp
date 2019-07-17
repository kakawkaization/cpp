#include <iostream>
using namespace std;

int main() {
    double f;
    double m;

    cout << "Enter length in meters: ";
    cin >> m;

    f = m * 3.28;
    cout << m << " meters equal " << f << " foot.";

    return 0;
}
