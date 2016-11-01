#include <iostream>
using namespace std;

int main() {
	char *s1, *s2;

	char str1[80] = "haha1";
	char str2[80] = "haha2";

	s1 = str1;
	s2 = str2;
	
	cout << s1 << "\n";

	while(*s1) s1++;
	
	*s1 = *s2;
	

	cout << s1 << "\n";
	
	return 0;
}
	
