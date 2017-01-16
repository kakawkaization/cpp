#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

void show_binary(unsigned int u);

int main(int argc, char *argv[]) {

	int m;

	if(argc!=2) {
		cout << "Usage: two [number].\n";
		return 1;
	}

	m = atoi(argv[1]);
 
	show_binary(m);

	cout << "\n";
		


	return 0;
}

void show_binary(unsigned int u) {
	register int t;

	for(t = 128; t > 0; t = t / 2)
		if(u & t) cout << "1 ";
		else cout << "0 ";
}
