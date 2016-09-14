#include <iostream>
using namespace std;

int main()
{
	int x;

	for(x=0;x<6;x++) {
		if(x==1) cout << "x равен единице.\n";
		else if(x==2) cout << "x равен двум.\n";
		else if(x==3) cout << "x равен трем.\n";
		else if(x==4) cout << "x равен четырем.\n";
		else cout << "x не попадает в диапазон от 1 до 4.\n";
	}

	return 0;
}
