#include <iostream>
using namespace std;

void f(int *j);

int main() {
	int i;

	f(&i);

	cout << i << "\n";

	return 0;
}

void f(int *j) {
	*j=100;
}
