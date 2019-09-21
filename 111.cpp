#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int magic, guess;

    magic = rand();

    cout << "Enter your variant of magic number: ";
    cin >> guess;

    if(guess == magic) cout << "** Right **";
    else
        cout << "Sorry, but you are mistaken.\n";

    return 0;
}