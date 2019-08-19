#include <iostream>
using namespace std;

int main() {
   int x, y;

    x = 10;
    y = 3;

    cout << x << " / " << y << " equal " << x / y <<
        " with remainder " << x % y << "\n";

    x = 1;
    y = 2;

    cout << x << " / " << y << " equal " << x / y << "\n" <<
        x << " % " << y << " equal " << x % y << "\n";

    return 0;
}
