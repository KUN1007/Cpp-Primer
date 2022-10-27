#include<iostream>
#include<iostream>
#include<vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

/*
int main() {
	string kun("kun is cutest!");
//	if (!kun.empty()) {               // if (kun.begin() != kun.end())
//		auto yuyu = kun.begin();
//		*yuyu = toupper(*yuyu);
//	}

	for (auto i = kun.begin(); i != kun.end() && !isspace(*i); ++i)
		*i = toupper(*i);
	cout << kun << endl;
	return 0;
}
*/

int main() {
	vector<string> kun;
	string yuyu;
	while (cin >> yuyu)
		kun.push_back(yuyu);
	for (auto i = kun.cbegin(); i != kun.cend() && !i->empty(); ++i)
		cout << *i << endl;
	return 0;
}