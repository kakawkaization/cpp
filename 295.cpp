#include <iostream>
#include <cstring>
using namespace std;

void mystrcat(char *s1, char *s2, int len = 0);

int main() {
	char str1[80] = "Это тест.";
	char str2[80] = "0123456789";

	mystrcat(str1, str2, 5);
	cout << str1 << "\n";

	strcpy(str1, "Это тест.");

	mystrcat(str1, str2);

	cout << str2 << "\n";

	return 0;
}

void mystrcat(char *s1, char *s2, int len) {
	while(*s1) s1++;

	if(len == 0) len = strlen(s2);

	while(*s2 && len) {
		*s1 = *s2;
		s1++;
		s2++;
		len--;
	}

	*s1 = '\0';
}
