#include <iostream>
using namespace std;

int summation(int nums[], int n);

int main() {
	int vals[] = {1, 2, 3, 4, 5};
	int result;

	result = summation(vals, 5);

	cout << "Сумма элементов массива равна " << result << "\n";

	return 0;
}

int summation(int nums[], int n) {
	register int i;
	register int sum = 0;

	for(i = 0; i < n; i++)
		sum = sum + nums[i];

	return sum;
}
