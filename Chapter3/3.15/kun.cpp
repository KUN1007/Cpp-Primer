#include<iostream>
#include<vector>

using std::string;
using std::vector;
using std::cin;
using std::cout;

int main() {
	vector<string> kun;
	string yuyu;
	while (cin >> yuyu)
		kun.push_back(yuyu);
	for (auto &i : kun)
		cout << i;
		return 0;
}