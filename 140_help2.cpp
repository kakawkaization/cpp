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
    } while(choice < '1' || choice > '5');

    cout << "\n\n";

    switch(choice) {
        case '1':
            cout << "Instruction if:\n\n";
            cout << "if(condition) instruction;\n";
            cout << "else instruction;\n";
            break;
        case '2':
            cout << "Instruction switch:\n\n";
            cout << "switch(expression) {\n";
            cout << "    case constant:\n";
            cout << "        sequence of instructions\n";
            cout << "        break;\n";
            cout << "    // ...\n";
            cout << "}\n"; 
            break;
        case '3':
            cout << "Instruction for:\n\n";
            cout << "for(initialization; condition; increment)";
            cout << " instruction;\n";
            break;
        case '4':
            cout << "Instruction while:\n\n";
            cout << "while(condition) instruction;\n";
            break;
        case '5':
            cout << "Instruction do-while:\n\n";
            cout << "do {\n";
            cout << "    instruction;\n";
            cout << "} while(condition);\n";
            break;
    }

    return 0;
}
