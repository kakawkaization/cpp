#include <iostream>
using namespace std;

bool isEven(int num) {
	if(!(num %2)) return true;
	return false;
}

int main() {
	if(isEven(4)) cout << "Число 4 четное.\n";
	if(isEven(3)) cout << "Эта строка не будет выведена.";

	return 0;
}
