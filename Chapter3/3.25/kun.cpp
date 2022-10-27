#include<iostream>
#include<vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
	vector<int> kun(11, 0);
	int yuyu = 0, j = 0;
	while (cin >> yuyu) {
		if (yuyu < 100)
			for (auto i = kun.begin(); j != yuyu/10; ++i, ++j)
				++(*i);
	}
	for (auto i : kun)
		cout << i << " ";
	cout << endl;
	return 0;
}