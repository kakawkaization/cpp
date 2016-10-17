#include <iostream>
using namespace std;

int min(int a, int b);
char min(char a, char b);
int *min(int *a, int *b);

int main() {
	int i=10, j=22;

	cout << "min('X', 'a'): " << min('X', 'a') << "\n";
	cout << "min(9, 3): " << min(9, 3) << "\n";
	cout << "*min(&i, &j): " << *min(&i, &j) << "\n";

	return 0;
}

int min(int a, int b) {
	if(a < b) return a;
	else return b;
}

char min(char a, char b) {
	if(tolower(a) < tolower(b)) return a;
	else return b;
}

int *min(int *a, int *b) {
	if(*a < *b) return a;
	else return b;
}
