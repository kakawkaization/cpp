#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double Principal; 	// исходная сумма займа
	double IntRate;		// процентная ставка в виде
				// числа (например, 0.075)
	double PayPerYear = 12;	// количество выплат в год
	double NumYears;	// срок займа (в годах)
	double Payment;		// размер регулярного платежа
	double AllPayment;	// общая сумма выплат
	double Overpayment;	// переплата
	double numer, denom;	// временные переменные
	double b, e;		// аргументы для вызова
				// функции Pow()

	cout << "Введите исходную сумму займа: ";
	cin >> Principal;

	cout << "Введите процентную ставку (например, 0.075): ";
	cin >> IntRate;

	cout << "Введите срок займа (в годах): ";
	cin >> NumYears;

	numer = IntRate * Principal / PayPerYear;

	e = -(PayPerYear * NumYears);
	b= (IntRate / PayPerYear) + 1;

	denom = 1 - pow(b, e);

	Payment = numer / denom;

	AllPayment = Payment * PayPerYear * NumYears;

	Overpayment = AllPayment - Principal;

	cout << "Размер платежа по займу составляет "
		<< Payment << " рублей\n";

	cout << "Общая сумма выплат за весь период составляет "
	<< AllPayment << " рублей\n";
	
	cout << "Переплата за весь период составляет " <<
	Overpayment << " рублей\n";

	return 0;
}
