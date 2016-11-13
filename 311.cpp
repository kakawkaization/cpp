#include <iostream>
using namespace std;

int running_avg(int i);

int main() {
	int num;

	do {
		cout << "Введите числа (-1 означает выход): ";
		cin >> num;
		if(num != -1)
			cout << "Текущее среднее равно: "
				<< running_avg(num);
			cout << "\n";
	} while(num > -1);

	return 0;
}

int running_avg(int i) {
	static int sum = 0, count = 0;

	sum = sum + i;

	count++;

	return sum / count;
}
