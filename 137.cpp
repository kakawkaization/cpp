#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int magic, guess;

    magic = rand();

    do {
        cout << "Emter your variant of magic number: ";
        cin >> guess;
        if(guess == magic) {
            cout << "** Right ** ";
            cout << magic <<
                << "is that number.\n";
    }
