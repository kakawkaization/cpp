#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for(int i = 2; i <= 100; i++) {
        for(int j = 2; j < i; j++) {
            if(i % j == 0) count += 1;
        }
    }

    return 0;
}