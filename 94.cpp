#include <iostream>
using namespace std;

int main() {
    int i, j;
    bool b1, b2;

    i = 10;
    j = 11;

    if(i < j) cout << "i < j\n";
    if(i <= j) cout << "i <= j\n";
    if(i != j) cout << "i != j\n";
    if(i == j) cout << "It's not executed!\n";
    if(i >= j) cout << "It's not executed!\n";
    if(i > j) cout << "It's not executed!\n";

    b1 = true;
    b2 = false;

    if(b1 && b2) cout << "It's not executed!\n";
    if(!(b1 && b2)) cout <<
        "!(b1 && b2) equal to value TRUE\n";
    if(b1 || b2) cout << "b1 || b2 equal to value TRUE\n";

    return 0;
}
