#include <iostream>
using namespace std;

char lrotate(char *val);

int main() {
	char ch[80] = "test";
	char *p;

	p = ch;

	cout << p << "\n";

	return 0;
}

char lrotate(char *val) {
	val++;

	return *val;
}
