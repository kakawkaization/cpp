#include <iostream>
using namespace std;

int main() {
    int i;

    for(i = 0; i < 5; i++) {
        switch(i) {
            case 0: cout << "less 1\n";
            case 1: cout << "less 2\n";
            case 2: cout << "less 3\n";
            case 3: cout << "less 4\n";
            case 4: cout << "less 5\n";
        }
        cout << "\n";
    }

    return 0;
}