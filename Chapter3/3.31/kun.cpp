#include<iostream>

using std::cout;
using std::endl;

int main() {
	int kun[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (auto i : kun)
		cout << i << endl;
	return 0;
}