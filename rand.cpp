#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int i;
	int r;

	r = rand();

	for(i = 0; r <= 20000; i++)

		r = rand();
	
	cout << "Число равно " << r << 
		". Оно сгенерировано при попытке " << i << ".\n";

	return 0;
}

