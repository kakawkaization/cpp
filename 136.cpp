#include <iostream>
using namespace std;

int main() {
    int num;

    do {
        cout << "Enter number (100 - to exit): ";
        cin >> num;
    } while(num != 100);

    return 0;
}
