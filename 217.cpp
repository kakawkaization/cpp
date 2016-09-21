#include <iostream>
using namespace std;

void f();

int main() {
	cout << "До вызова функции.\n";

	f();
	
	cout << "После вызова функции.\n";

	return 0;
}

void f() {
	cout << "В функции f().\n";

	return;

	cout << "Этот текст не будет отображен.\n";
}

