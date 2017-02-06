#include <iostream>
using namespace std;

//unsigned char rrotate(unsigned char *val, int n);
unsigned char lrotate(unsigned char *val, int n);

int main() {
	unsigned char ch[80] = "test";
	unsigned char d;
	unsigned char *p;

	cout << "Исходное значение в двоичном коде:\n";

	cout << ch << "\n";

	cout << "Результат 8-кратного циклического сдвига влево:\n";
        d = lrotate(ch, 1);
        cout << d << "\n";

/*	cout << "Результат 8-кратного циклического сдвига вправо:\n";
	ch = rrotate(ch, 1);
	cout << ch << "\n";
*/
	return 0;
}

unsigned char lrotate(unsigned char *val, int n) {
	unsigned int t;

	t = *val;
	for(t = 0; val[t]; t++) val[t];
/*
	for(int i = 0; i < n; i++) {
		t = t << 1;

		if(t & 256)
			t = t | 1;
	}
*/
	return t;
}
/*
unsigned char rrotate(unsigned char *val, int n) {
	unsigned int t;

	t = *val;

	t = t << 8;

	for(int i = 0; i < n; i++) {
		t = t >> 1;

		if(t & 128)
			t = t | 32768;
	}

	t = t >> 8;

	return t;
}*/
