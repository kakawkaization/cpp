#include <iostream>
using namespace std;

int box(int lenght,int width,int height);

int main() {
	int answer;

	answer=box(10,11,3);

	cout << "Объем параллелепипеда равен " << answer << "\n";

	return 0;
}

int box(int length,int width,int height) {
	return length*width*height;
}
