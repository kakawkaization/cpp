#include <iostream>
#include <cstdlib>
using namespace std;

unsigned char rrotate(unsigned char *val, int n);
unsigned char lrotate(unsigned char *val, int n);

int main() {
	unsigned char ch[80] = "test";
	char a[80];
	//char *p;
	//*p = a;
	int b;
	int i;

	cout << "enter count of bits: ";
	cin >> a;

	b = atoi(a);

	cout << "Исходное значение в двоичном коде:\n";

	cout << ch << "\n";

	cout << "Результат 8-кратного циклического сдвига влево:\n";
        //for(int i = 0; i < 8; i++) {
		for(i = 0; i < 80; i++) ch[i];
                lrotate(ch, b);
//                cout << ch << "\n";
//        }

//	cout << "Результат 8-кратного циклического сдвига вправо:\n";
	//for(int i = 0; i < 8; i++) {
//		rrotate(ch, b);
//		cout << ch << "\n";
//	}

	return 0;
}

unsigned char lrotate(unsigned char val, int n) {
	unsigned int t;

	t = val;

	for(int i = 0; i < n; i++) {
		t = t << 1;

		if(t & 256)
			t = t | 1;
	}

	return t;
}

unsigned char rrotate(unsigned char val, int n) {
	unsigned int t;

	t = val;

	t = t << 8;

	for(int i = 0; i < n; i++) {
		t = t >> 1;

		if(t & 128)
			t = t | 32768;
	}

	t = t >> 8;

	return t;
}
