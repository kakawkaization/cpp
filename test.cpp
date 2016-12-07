#include <iostream>
using namespace std;

int main() {
	char m[] = "hahahaha kaka";
	char key = 77;

	for(int i = 0; i < 20; i++) 
		m[i] = m[i] ^ 77;
		cout << m;

	return 0;
}
