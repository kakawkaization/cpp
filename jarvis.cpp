#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char name[80];
	char ans[80];
	char mc;

	cout << "################################################\n";
	cout << "#                                              #\n";
	cout << "#                =Jarvis talk=                 #\n";
	cout << "#                                              #\n";
	cout << "################################################\n\n";

	cout << "enter name: ";
	cin >> name;

	cout << "\nHello, " << name << ", how are you doing?: ";
	cin  >> ans;
		
	if(!strcmp(ans, "good")) cout << "\nGreat.\n";
	else cout << "ok.\n";

	while(mc != 'q') {
		cout << "\nOk, choose number of menu:\n";
		cout << "1. Open map.\n";
		cout << "2. Show localtions.\n";
		cout << "3. Show people.\n\n";
		cout << "Press q to exit\n\n";

		cin >> mc;
	}
	
	return 0;
}
