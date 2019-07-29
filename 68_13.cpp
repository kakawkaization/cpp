#include <iostream>
using namespace std;

int main() {
    for(double i = 1.0; i <= 100.0; i++) {
        cout << i << " pounds on the Earth equal " << i * 0.17 <<
            " pounds on the Moon\n";
        
        if(i == 25.0) cout << "\n";
    }

    return 0;
}
