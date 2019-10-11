#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int i, r;

    r = rand();

    for(i = 0; r <= 20000; i++)
        r = rand();

    cout << "Number is equal " << r <<
        "It's genarated on attempt " << i << ".\n";

    return 0;
}