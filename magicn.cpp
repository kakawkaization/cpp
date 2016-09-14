// Программа "Угадай магическое число"

#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{
	int magic; // магическое число
	int guess; // вариант пользователя

	magic = rand(); // Получаем случайное число.

	cout << "Введите свой вариант магического числа: ";
	cin >> guess;

	// Если значение переменной guess совпадает с
	// "магическим числом", будет выведено сообщение.
	if(guess == magic)  {
		cout << "** Правильно **";
		cout << magic
			<< " и есть то самое магическое числою\n";
	}
	else {
		cout << "...Очень жаль, но вы ошиблись.\n";
		if(guess > magic)
			cout << " Ваш вариант больше магического числа.\n";
		else
			cout << " Ваш вариант меньше магического числа.\n";
	}
	return 0;
}
