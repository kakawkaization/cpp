#include <iostream>
#include <cmath>
using namespace std;

void rnmound(double &g);
double modf(double num, double *i);

int main() {

	double c;
	
	cout << "enter double number: ";
	cin >> c;

	rnmound(c);

	return 0;
}

void rnmound(double &g) {
	double d, i;
	double num = g;
	int n;
	
	d = modf(num, &i);
	
	if(d > 0.5) 
		n = i + 1;
	else
		n = i - 1;	

	cout << n << "\n";
}
