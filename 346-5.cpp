#include <iostream>
using namespace std;

int counter(int i);

int main() {
	int a;
	while(a != 2) {
		cout << "Press 1: ";
	
		cin >> a;

		cout << counter(a) << "\n";;
	}

	return 0;
}

int counter(int i) {
	static int sum = 0;
	sum++;

	return sum;
}
