#include <iostream>
using namespace std;

void byThrees();

void reset();

int i=0;

int main() {
	byThrees();

	return 0;
}

void byThrees() {
	int count=0;

	for (i;i<=12;i+=3) {
		reset();
		cout << i << " ";
	}

}

void reset() {
	if(i==9) {
		cout << "\n";
		i=0;
	}	
}
