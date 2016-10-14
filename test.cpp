#include <iostream>
using namespace std;

int &f();

int main() {
	cout << f() << "\n";

	return 0;
}

int f() {
	int i=10;

	return i;
}
