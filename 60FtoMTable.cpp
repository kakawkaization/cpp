#include <iostream>
using namespace std;

int main() {
    double f;
    double m;
    int counter;

    counter = 0;

    for(f = 1.0; f <= 100.0; f++) {
        m = f / 3.28;
        cout << f << "foot equal " << m << " meters.\n";

        counter++;

        if(counter == 10) {
            cout << "\n";
            counter = 0;
        }
    }

    return 0;
}
