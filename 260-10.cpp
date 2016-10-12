#include <iostream>
using namespace std;

void rnumb(int a);

int main() {

	rnumb(10);

	cout << "\n";

	return 0;
}

void rnumb(int a) {
	
	if(a!=0) 
		rnumb(a-1);
	else
		return;

	cout << a << " ";
}
