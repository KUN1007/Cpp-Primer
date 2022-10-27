#include<iostream>
#include<vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
	vector<int> kun;
	int yuyu;
	while (cin >> yuyu)
		kun.push_back(yuyu);

	for (auto i = kun.begin(); i != kun.end() - 1; ++i)
		cout << *i + *(i + 1) << "\t";
	cout << endl;

	cout << "-------------------------" << endl;

	for (auto i = kun.begin(), j = kun.end() - 1; i <= j; ++i, --j)
		cout << *i + *j << "\t";
	cout << endl;
	return 0;
}