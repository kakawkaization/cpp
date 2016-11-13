#include <iostream>
using namespace std;

int running_avg(int i);
void reset();

int main() {
	int num;

	do {
		cout << "Введите числа (-1 для выхода, -2 для сброса): ";
		cin >> num;
		if(num == -2) {
			reset();
			continue;
		}
		if(num != -1)
			cout << "Среднее значение равно: " << running_avg(num);
			cout << "\n";
		} while(num != -1);

	return 0;
}
