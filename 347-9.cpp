#include <iostream>
using namespace std;

unsigned char *rrotate(unsigned char *val, int n);
unsigned char *lrotate(unsigned char *val, int n);

int main() {
	unsigned char ch[80] = "haha";
	unsigned char *wch;
	
	wch = ch;


	cout << "Исходное значение в двоичном коде:\n";

	cout << wch << "\n";

	cout << "Результат 8-кратного циклического сдвига влево:\n";
	wch = lrotate(wch, 1);
	cout << wch << "\n";

	cout << "Результат 8-кратного циклического сдвига вправо:\n";
	wch = rrotate(wch, 1);
	cout << wch << "\n";

	return 0;
}

unsigned char *lrotate(unsigned char *val, int n) {
	unsigned int t;
	unsigned int *dh;

	t = *val;

	for(int i = 0; i < n; i++) {
		t = t << 1;

		if(t & 256)
			t = t | 1;
	}

	dh = &t;
	return *dh;
}

unsigned char *rrotate(unsigned char *val, int n) {
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

}
