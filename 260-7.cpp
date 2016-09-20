#include <iostream>
using namespace std;

int byThrees();

void reset();

int main() {
	int th;

	cout << byThrees() << "\n";
	
//	reset();

	cout << byThrees() << "\n";

	return 0;
}

int byThrees() {
	int i;

	for (i=0;i<=12;i+=3) cout << i << " ";

}

void reset() {
	
}
