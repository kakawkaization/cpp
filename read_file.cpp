#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream tfile;
	tfile.open("text.txt");
	char output[100];
	while(!tfile.eof()) {

	tfile >> output;
	cout << output;
	}

	tfile.close();


	return 0;
}
