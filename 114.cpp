#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int magic, guess;

    magic = rand();

    cout << "Enter your variant of magic number: ";
    cin >> guess;

    if(guess == magic) {
        cout << "** Right **\n";
        cout << magic
            << " is that magic number.\n";
    }
    else {
        cout << "...Very sorry, but you were wrong.\n";
        if(guess > magic)
            cout << "Your variant is bigger than magic number.\n";
        else
            cout << "Your variant is less than magic number.\n";
    }
}