#include <iostream>
using namespace std;

int main() {
    int t;

    for(t = 0; t < 100; t++) {
        if(t == 10) break;

        cout << t << " ";
    }

    return 0;
}
