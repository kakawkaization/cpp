#include <iostream>
using namespace std;


void println(bool b);
void println(int i, int x = 0);
void println(long i, int x = 0);
void println(char ch);
void println(char *str, int x = 0);
void println(double d);

void print(bool b);
void print(int i);
void print(long b);
void print(char ch);
void print(char *str, int x = 0);
void print(double d);

void f(int k);

int main() {
	println(true);
	println(10, 5);
	println("Это простой тест", 15);
	println(' ');
	println(99L);
	println(123.23);

	print("Вот несколько значений: ", 18);
	print(false);
	print(' ');
	print(88);
	print(' ');
	print(100000L);
	print(' ');
	print(100.01);

	println(" Выполнено!");

	return 0;
}

void println(bool b) {
	if(b) cout << "истина\n";
	else cout << "ложь\n";
}

void println(int i, int x) {
	f(x);
	cout << i << "\n";
}

void println(long i, int x) {
	f(x);
	cout << i << "\n";
}

void println(char ch) {
	cout << ch << "\n";
}

void println(char *str, int x) {
	f(x);
	cout << str << "\n";
}

void println(double d) {
	cout << d << "\n";
}

void print(bool b) {
        if(b) cout << "истина";
        else cout << "ложь";
}

void print(int i) {
        cout << i;
}

void print(long i) {
        cout << i;
}

void print(char ch) {
        cout << ch;
}

void print(char *str, int x) {
	f(x);
        cout << str;
}

void print(double d) {
        cout << d;
}

void f(int k) {
        int i;

        for(i = 0; i < k; i++) {
		cout << " ";
        }
}
