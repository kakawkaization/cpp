#include <iostream>
using namespace std;

void byThrees();

void reset();

int i=0;
int count=0;
int a;

int main() {
	byThrees();

	return 0;
}

void byThrees() {
	cout << "enter a: ";
	cin >> a;
	for (i;i<=120;i+=3) {
		reset();
		cout << i << " ";
		if(count==5) break;
	}
}

void reset() {
	if(i==a) {
		cout << "\n";
		i=0;
		count++;
	}	
}
