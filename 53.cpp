#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    a = 2;
    b = 3;

    if(a < b) cout << "a less then b\n";

    if(a == b) cout << "You will not see it.\n";

    c = a - b;

    cout << "Variable c contains -1.\n";

    if(c >= 0) cout << "Value c is not negative.\n";
    if(c < 0) cout << "Value c is negative.\n";

    cout << "\n";

    c = b - a;

    cout << "Value c contains 1.\n";
    if(c >= 0) cout << "Value c is not negative.\n";
    if(c < 0) cout << "Value c is negative.\n";

    return 0;
}
