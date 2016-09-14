#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int magic;
	int guess;

	magic = rand();
	
	do {
		cout << "Введите свой вариант магического числа: ";
		cin >> guess;
		if(guess == magic) {
			cout << "** Правильно ** ";
			cout << magic <<
				" и есть то самое магическое число.\n";
		}
		else {
			cout << "...Очень жаль, но вы ошиблись.";
			if(guess > magic)
				cout << 
				" Ваше число больше магического.\n";
			else cout <<
					" Ваше число меньше магического.\n";
		}
	} while(guess != magic);

	return 0;
}
