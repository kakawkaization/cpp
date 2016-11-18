#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

void show_binary(unsigned int u);

int main() {
	char name[80];
	char ans[80];
	char mc;

	cout << "################################################\n";
	cout << "#                                              #\n";
	cout << "#               =kakawka's tool=               #\n";
	cout << "#                                              #\n";
	cout << "################################################\n\n";

	while(mc != 'q') {
		cout << "\n\n";
		cout << "Choose number of menu:\n\n";
		cout << "1. RJ-45 pinout.\n";
		cout << "2. Convert number to binary.\n";
		cout << "3. Programming.\n\n";
		cout << "Enter q to exit\n\n";

		cin >> mc;
	
		char m[80];

		if(mc == '1') {
			for(; ;) {
				cout << "\n";
				cout << "RJ-45 pinout\n\n";
				cout << "###############################\n";
				cout << "#       #      #      #       #\n";
				cout << "#       #      #      #       #\n";
				cout << "#  WO-O # WG-B # WB-G # WB-B  #\n";
				cout << "#       #      #      #       #\n";
				cout << "#       #      #      #       #\n";
				cout << "###############################\n\n";
				cout << "Enter b to return\n\n";
				cin >> m;

				if(!strcmp(m, "b")) break;
			}
		}

		else if( mc == '2') {
			for(; ;) {
				cout << "\n\n";
				cout << "enter number from 0 to 255 or enter b to return\n\n";
				cin >> m;
				
				cout << "\n";

				show_binary(atoi(m));

				if(!strcmp(m, "b")) break;
			}
		}
	}
	
	return 0;
}

void show_binary(unsigned int u) {
	register int t;

        for(t = 128; t > 0; t = t / 2)
	        if(u & t ) cout << "1 ";
       		 else cout << "0 ";
}
