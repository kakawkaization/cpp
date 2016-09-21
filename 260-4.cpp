#include <iostream>
using namespace std;

void mystrlen(char *word);

int main() {
	char a[80];

	cout << "Введите слово: ";
	cin >> a;

	mystrlen(a);

	return 0;
}

void mystrlen(char *word) {
	int i;
	int count=0;

	for(i=0;word[i];i++) count++;

	cout << "Длина слова " << word << " равна " << count << " символам.\n";
}
