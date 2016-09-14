#include <iostream>
using namespace std;

int main() {
	int i,j;

	i=10;
	j=100;

	if(j>0) {
		int i;

		i=j/2;
		cout << "Веутренняя переменная i: " << i << "\n";
	}

	cout << "Внешняя переменная i: " << i << "\n";

	return 0;
}
