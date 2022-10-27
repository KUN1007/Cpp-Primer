#include<iostream>
#include<vector>

using std::vector;
using std::cout;
using std::endl;

/*
int main() {
	int kun[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int yuyu[10] = {};
	for (unsigned i = 0; i < 10; ++i)
		yuyu[i] = kun[i];

	for (auto i : yuyu)
		cout << i << endl;
	return 0;
}
*/

int main() {
	vector<int> kun{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	vector<int> yuyu = kun;

	for (auto i : yuyu)
		cout << i << endl;
	return 0;
}