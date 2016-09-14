#include <iostream>
using namespace std;

void fl();

int main() {
	int val = 10;

	cout << "Значение переменной val в функции main(): " <<
		val << "\n";
	fl();
	cout << "Значение переменной val в функции main(): " <<
		val << "\n";

	return 0;
}

void fl() {
	int val=88;

	cout << "Значение переменной val в функции fl(): " <<
		val << "\n";
}
