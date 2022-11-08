#include<iostream>
#include<vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
	vector<int> kun;
	int yuyu = 0;
	while (cin >> yuyu)
		kun.push_back(yuyu);

	// for (auto j : kun)
	// cout << j << endl;

	decltype(kun.size()) i = 0;
	decltype(kun.size()) k = kun.size() - 1;

	if (!kun.empty())
		for (i; i < kun.size() - 1; ++i)
		cout << kun[i] + kun[i + 1] << "\t";
	cout << endl;
	i = 0;

	cout << "-----------------------------" << endl;

	while (i < k && !kun.empty()) {
		cout << kun[i] + kun[k] << "\t";
		++i;
		--k;
	}
	cout << endl;
	return 0;
}