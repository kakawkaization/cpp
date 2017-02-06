#include <iostream>
#include <cctype>
using namespace std;

int main() {
	char *p;
	char str[80] = "This IS A Test";

	cout << "Исходная строка: " << str << "\n";

	p = str;

	while(*p) {
		if(isupper(*p))
			*p = tolower(*p);
		else if(islower(*p))
			*p = toupper(*p);
		p++;
	}

	cout << "Строка с инвентированным регистром букв: " << str << "\n";

	return 0;
}
