#include <iostream>
using namespace std;

int main()
{
	int a, b;

	cout << "Введите числитель: ";
	cin >> a;
	cout << "Введите знаменатель: ";
	cin >> b;

	if(b)
		cout << "Результат: " << a / b 
					<< "\n";
	else
		cout << "На нуль делить нельзя.\n";

	return 0;
}
