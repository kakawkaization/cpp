#include <iostream>
using namespace std;

int main() {
    char choice;

    do {
        cout << "Reference for instructions:\n";
        cout << " 1. If\n";
        cout << " 2. switch\n";
        cout << " 3. for\n";
        cout << " 4. while\n";
        cout << " 5. do-while\n";
        cout << "Choose variant of reference: ";

        cin >> choice;
    } while(choice < '1' || cchoice > '5');

    cout << "\n\n"

    switch(choice) {
        case '1':
            cout << "Instruction if:\n\n";
            cout << if(condition) instruction;\n";
            cout << "else instruction;\n";
            break;
