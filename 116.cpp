#include <iostream>
using namespace std;

int main() {
    int x;

    for(x = 0; x < 6; x++) {
        if(x == 1) cout << "x equals 1.\n";
        else if(x == 2) cout << "X equals 2.\n";
        else if(x == 3) cout << "X equals 3.\n";
        else if(x == 4) cout << "X equals 4.\n";
        else cout << "x does not fall in the range from 1 to 4\n";
    }

    return 0;
}