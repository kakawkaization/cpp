#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	char *vm;
	char start[100];

	if(argc != 2) {
		cout << "Usage: bsistart <vm>\n";
	}

	vm = argv[1];
	sprintf(start, "screen -d -m -S %s sh -c 'cd /home/artem/%s && touch ho'", vm, vm); 
	system(start);

	return 0;
}
