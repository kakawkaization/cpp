#include <iostream>
using namespace std;

void myfunc();

int main() {
	cout << "В функции main().\n";

	myfunc();

	cout << "Снова в функции main().\n";

	return 0;
}

void myfunc() {
	cout << "В функции myfunc.\n";
}


