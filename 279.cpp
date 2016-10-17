#include <iostream>
using namespace std;

int neg(int n);
double neg(double n);
long neg(long n);

int main() {
	cout << "neg(-10): " << neg(-10) << "\n";
	cout << "neg(9L): " << neg(9L) << "\n";
	cout << "neg(11.23): " << neg(11.23) << "\n";

	return 0;
}

int neg(int n) {

	return -n;
}

double neg(double n) {
	return -n;
}

long neg(long n) {
	return -n;
}
