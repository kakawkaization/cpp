#include <iostream>
using namespace std;

void show_binary(unsigned int u);

int main() {
	unsigned u;

	cout << "Введите число между 0 и 255: ";
	cin >> u;

	cout << "Исходное число в двоичном коде: ";
	show_binary(u);

	cout << "Его дополнение до единицы: ";
	show_binary(~u);

	return 0;
}

void show_binary(unsigned int u) {
	register int t;

	for(t = 128; t > 0; t = t / 2) 
		if(u & t) cout << "1 ";
		else cout << "0 ";

	cout << "\n";
}
