#include <iostream>
using namespace std;

int main() {
	char choice;

	cout << "Справка по инструкциям:\n";
	cout << " 1. if\n";
	cout << " 2. switch\n";
	cout << "Выберите вариант справки: ";
	cin >> choice;

	cout << "\n";

	switch(choice) {
		case '1':
			cout << "Синтаксис инструкции if:\n\n";
			cout << "if(условие) инструкция;\n";
			cout << "else инструкция;\n";
			break;
		case '2':
			cout << "Синтаксис инструкции switch:\n\n";
			cout << "switch(выраение) {\n";
			cout << "	case константа:\n";
			cout << " 		последовательность инструкции\n";
			cout << "		break;\n";
			cout << "	// ...\n";
			cout << "}\n";
			break;
		default:
			cout << "Такого варианта нет.\n";
	}

	return 0;
}
