#include<iostream>

using std::cout;
using std::endl;

int main() {
	int kun[] = { 1, 2, 3, 4, 5, 6, 7 };
	int *p = kun;
	*p = 0;
	for (int i = 0; i < 7; ++i)
		*(p + i) = 0;

	for (auto a: kun)
		cout << a << endl;

	return 0;
}