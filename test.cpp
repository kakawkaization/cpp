#include <iostream>
using namespace std;

void test(char *s);

int main() {
	int i;
	char word[80] = "haha";
	
	test(word);

	return 0;
}

void test(char *s) {
//	int i;
//	for(i = 0; i < 10; i++) s[i];

	cout << s;
}
