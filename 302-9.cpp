#include <iostream>
using namespace std;

bool myfunc(char ch, int a=10, int b=20);

int main() {
	char mch = 'h';

	cout << myfunc(mch) << "\n";
	cout << myfunc(mch, 3, 4) << "\n";
	cout << myfunc(mch,34) << "\n";
	cout << myfunc(mch, 0, 0) << "\n";
	
	
	return 0;
}


bool myfunc(char ch, int a, int b) {
	return ch;
	return a;
	return b;
}
