#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;

int main() {
	char word[80];
	cout << "Enter word to file: ";
	gets(word);
	ofstream tfile;
	tfile.open("text.txt");
	tfile << word << "\n";;
	tfile.close();
	
	return 0;
}	
