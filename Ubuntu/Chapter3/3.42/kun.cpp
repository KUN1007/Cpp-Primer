#include<iostream>
#include<vector>

using namespace std;

/*
int main() {
	int len = 0;

	int yuyu[] = {};
	for (decltype(kun.size()) i = 0; i < kun.size(); ++i)
		yuyu[i] = kun[i];
	int yuyu_len = sizeof(yuyu) / sizeof(*yuyu);
	for (int i = 0; i < yuyu_len; ++i)
		cout << yuyu[i] << endl;
	return 0;
}
*/

int main() {
	vector<int> kun{1, 2, 3, 4, 5, 6, 7};
	auto it = kun.cbegin();
	int yuyu[kun.size()];
	int i = 0;
	for (; it != kun.end(); ++it) {
		yuyu[i] = *it;
		++i;
	}

	for (auto a : yuyu)
		cout << a << endl;
	return 0;
}