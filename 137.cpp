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
                "is that number.\n";
        }
        else {
            cout << "...Very sad, but you wrong.\n";
            if(guess > magic)
                cout << "Your number more tnan magic number.\n";
            else
                cout << "Your number less tnan magic number.\n";
        }
    } while(guess != magic);

    return 0;
}
