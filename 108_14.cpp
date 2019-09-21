#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 100; i++) {
        for(int j = 2; j * j < i; j++) {
            if(i % j != 0) cout << i << " ";
        }
    }

    return 0;
}