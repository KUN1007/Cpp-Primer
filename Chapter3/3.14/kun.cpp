#include<iostream>
#include<vector>

using std::vector;
using std::cin;
using std::cout;

int main() {
	vector<int> kun;
	int yuyu;
	while (cin >> yuyu)
		kun.push_back(yuyu);
	for (auto &i : kun)
		cout << i;
	return 0;
}