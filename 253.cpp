#include <iostream>
using namespace std;

void reverse(char *s);

int main() {
	char str[]="This is test";

	reverse(str);

	return 0;
}

void reverse(char *s) {
	if(*s)
		reverse(s+1);
//	else
//		return;

	cout << *s;
}
