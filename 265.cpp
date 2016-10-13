#include <iostream>
using namespace std;

void swap(int *x,int *y);

int main() {
	int i,j;

	i=10;
	j=20;

	cout << "Исходное значение переменных i и j: ";
	cout << i << " " << j << "\n";

	swap(&j,&i);

	cout << "Значения переменных i и j после обмена: ";
	cout << i << " " << j << "\n";

	return 0;
}

void swap(int *x,int *y) {
	int temp;

	temp=*x;

	*x=*y;

	*y=temp;
}
