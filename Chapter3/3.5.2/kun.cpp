#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	// unsigned kun[11] = {};
	unsigned kun[11];
	unsigned yuyu = 0;
	while (cin >> yuyu)
		if (yuyu <= 100)
			++kun[yuyu / 10];

	for (auto a : kun)
		cout << a << " ";
	cout << endl;
	return 0;
}