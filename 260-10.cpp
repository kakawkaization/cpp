#include <iostream>
using namespace std;

void fr(int b);

int main() {
	int a;
	void fr(a);

	return 0;
}

void fr(int b) {
	int a=0;
	fr(a+1);
	
	cout << a << " ";
}
