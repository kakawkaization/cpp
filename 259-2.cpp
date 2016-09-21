#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a,b,c;

	cout << "Введите длину одной стороны треугольника: ";
	cin >> a;
	cout << "Введите длину второй стороны треугольника: ";
	cin >> b;

	c=sqrt(a*a+b*b);

	cout << "Длина гипотенузы прямоугольного треугольгника равна: " << 
		c << "\n";

	return 0;
}
