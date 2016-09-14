#include <iostream>
using namespace std;

int main()
{
	int len;

	cout << "Введите длину строки (от 1 до 79): ";
	cin >> len;

	while(len>0 && len<80) {
		cout << '.';
		len--;
	}

	return 0;
}
