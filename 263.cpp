#include <iostream>
using namespace std;

double reciprocal(double x);

int main() {
	double t=10.0;

	cout << "Обратная величина от числа 10.0 равна "
		<< reciprocal(t) << "\n";

	cout << "Значение переменной t по-прежнему равно "
		<< t << "\n";

	return 0;
}

double reciprocal(double x) {
	x=1/x;

	return x;
}
