#include <iostream>
using namespace std;

int div_zero();

int main() {
	int i, j, result;

	cout << "Введите делимое и делитель: ";
	cin >> i >> j;

	result = j ? i / j : div_zero();

	cout << "Результат: " << result << "\n";

	return 0;
}

int div_zero() {
	cout << "Нельзя делить на нуль.\n";

	return 0;
}
