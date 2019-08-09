#include <iostream>
using namespace std;

int main() {
    bool b;

    b = false;
    cout << "Value of variable b equal " << b << "\n";

    b = true;
    cout << "Value of variable b equal " << b << "\n";

    if(b) cout << "It's possible.\n";

    b = false;
    if(b) cout << "It's impossible.\n";

    cout << "10 > 9 equal " << (10 > 9) << "\n";

    return 0;
}
