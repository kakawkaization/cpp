#include <iostream>
using namespace std;

int main() {
	char name[80];

	cout << "enter name: ";
	cin >> name;

	if(name == "tema") cout << "cool man\n";
	else cout << "what?\n";

	return 0;
}
