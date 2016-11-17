#include <iostream>
using namespace std;

int main() {
	char ch;

	for(int i = 0; i < 10; i++) {
		ch = 'A' + i;
		cout << ch;

		ch = ch | 32;

		cout << ch << " ";
	}

	cout << "\n";
	
	return 0;
}
