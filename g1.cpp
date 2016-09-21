#include <iostream>
using namespace std;

int main() {
	char name[80];
	char q1[80];
	
	cout << "Enter your name: ";
	cin >> name;

	cout << "Hello " << name << ", can you help us?\n";
	cin >> q1;
	
	if(q1=="yes") cout << "Awesome\n";
	else cout << "ok, sorry.\n";

	return 0;
}
