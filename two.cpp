#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

void show_binary(unsigned int u);

int main() {
	char m[80];

	for(; ;) {
		cout << "\nenter number from 0 to 255 or enter q to exit\n\n";
		cin >> m;

		cout << "\n";

		show_binary(atoi(m));
		
		cout << "\n";

		if(!strcmp(m, "q")) break;
	}

	return 0;
}

void show_binary(unsigned int u) {
	register int t;

	for(t = 128; t > 0; t = t / 2)
		if(u & t) cout << "1 ";
		else cout << "0 ";
}
