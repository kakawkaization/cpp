#include <iostream>
using namespace std;

void show_binary(unsigned int u);

int main() {
	show_binary(8);

	return 0;
}

void show_binary(unsigned int u) {
	int t;

	for(t=128; t > 0; t = t/2)
		if(u & t) cout << "1 ";
		else cout << "0 ";
	cout << "\n";
}
