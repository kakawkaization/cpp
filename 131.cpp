#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int i;
    int sum;

    for(i = 1; i <= 10; sum += i++);

    cout << "Summ of numbers is equal " << sum << "\n";

    return 0;
}
