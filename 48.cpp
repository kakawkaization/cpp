#include <iostream>
using namespace std;

int main() {
    int ivar;
    double dvar;

    ivar = 100;
    dvar = 100.0;

    cout << "Variable ivar: " << ivar
                              << "\n";
    cout << "Variable ivar: " << dvar << "\n";

    cout << "\n";

    ivar = ivar / 3;
    dvar = dvar / 3.0;

    cout << "Value ivar after division: " << ivar << "\n";
    cout << "Value dvar after division: " << dvar << "\n";

    return 0;
}
