#include <iostream>
using namespace std;

void f(int &i);

int main() {
	int val=1;
	cout << "Старое значение переменной val: " << val
		<< "\n";
	f(val);
	cout << "Новое значение переменной val: " << val
		<< "\n";

	return 0;
}

void f(int &i) {
	i=10;
}
