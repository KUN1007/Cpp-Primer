#include<iostream>
#include<vector>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
	/*
	vector<int> kun;
	for (int i = 0; i < 10; ++i)
		kun.push_back(i);
	// for (auto j = 0; j < kun.size(); ++j)
	// 	cout << kun[j] << endl;
	for (auto &i : kun)
		cout << i << endl;
	return 0;
	*/

	vector<string> kun;
	string yuyu;
	while (cin >> yuyu)
		kun.push_back(yuyu);
	for (auto &i : kun)
		cout << i;
	return 0;
}
