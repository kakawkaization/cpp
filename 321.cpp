#include <iostream>
using namespace std;

enum transport{car, truck, airplane, train, boat};

char name[][20] = {
	"Automobile",
	"Truck",
	"Airplane",
	"Train",
	"Boat"
};

int main() {
	transport how;

	how = car;
	cout << name[how] << "\n";

	how = airplane;
	cout << name[how] << "\n";

	how = train;
	cout << name[train] << "\n";

	return 0;
}
