#include <iostream>
#include <cstring>
using namespace std;

int main(int argc,char *argv[]) {
	char a[80];

	cout << "Enter password: ";
	cin >> a;

	for(int i=0;argv[i];i++);

	if(!strcmp(argv[1],a))  
		cout << "correct.\n";

	else cout << "Access Denied.\n";
	

	return 0;
}
	
