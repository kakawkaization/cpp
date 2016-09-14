#include <iostream>
using namespace std;

int main() {

	int i;
	for(i = 1; i <= 100; ++i) {
		if(i % 2 && i > 1) 
		cout << i << " ";
	}
	cout << "\n";

	return 0;
}

