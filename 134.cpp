#include <iostream>
using namespace std;

int main() {
    unsigned char ch;

    ch = 32;
    while(ch) {
        cout << ch;
        ch++;
    }

    cout << "\n";

    return 0;
}
