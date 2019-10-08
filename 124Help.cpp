#include <iostream>
using namespace std;

int main() {
    char choice;

    cout << "Help instructions:\n";
    cout << " 1. if\n";
    cout << " 2. switch\n";
    cout << "Choose help option: ";
    cin >> choice;

    cout << "\n";

    switch(choice) {
        case '1':
            cout << "Syntax of instuction if:\n\n";
            cout << "if(condition) instruction;\n";
            cout << "else instruction;\n";
            break;
        case '2':
            cout << "Syntax of instruction switch:\n\n";
            cout << "switch("
    }
}