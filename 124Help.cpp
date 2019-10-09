#include <iostream>
using namespace std;

int main() {
    char choice;

    cout << "Help instructions:\n";
    cout << " 1. if\n";
    cout << " 2. switch\n\n";
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
            cout << "switch(expression) {\n";
            cout << "    case constant:\n";
            cout << "    sequence of instructions\n";
            cout << "    break;\n";
            cout << "    // ...\n";
            cout << "}\n";
            break;
        default:
            cout << "No such option.\n";
    }

    return 0;
}