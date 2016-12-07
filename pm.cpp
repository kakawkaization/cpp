#include <iostream>
#include <cstring>
using namespace std;

int counter();

int main() {
	int b;
	int i;
	char p[80];
	char a[80] = "haha";

	for(; ;) {
		cout << "enter password: ";
		cin >> p;

		if(!strcmp(p, a)) {
				for(; ;) {
					cout << "\n";
					cout << "Emails:\n\n";
					cout << "tony ap2mdsSlo\n";
					cout << "johny dls8jHs\n\n";
					
					cout << "press q to exit\n";
					cin >> p;

					if(!strcmp(p, "q")) break;
				}
		}
		else cout << "access denied\n";
	
		b = counter();

		if(b == 3) break;
		else if(!strcmp(p, "q")) break;
	}

	return 0;
}

int counter() {
	static int sum = 0;
	sum++;

	return sum;
}
