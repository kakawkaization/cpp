#include <iostream>
using namespace std;

int gnegate(const int *val);

int main() {
	int result;
	int v = 10;

	result = gnegate(&v);

	cout << "Результат отрицания " << v << " равен " << result;
	cout << "\n";

	return 0;
}

int gnegate(const int *val) {
	return - *val;
}
