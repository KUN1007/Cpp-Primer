#include<iostream>
#include<vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

/*
int main() {
	vector<int> kun{1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (int &i : kun)
		i *= i;
	for (int i : kun)
		cout << i << endl;
	return 0;
}
*/

/*
int main() {
	vector<unsigned> kun(11, 0);
	unsigned yuyu;
	while (cin >> yuyu)
		if (yuyu <= 100)
			++kun[yuyu/10];
	for (auto i : kun)
		cout << i << endl;
	return 0;
}
*/

int main() {
	vector<int> kun;
	for (decltype(kun.size()) i = 0; i != 7; ++i){
		int j = 0;
		cin >> j;
		kun.push_back(j);	
	}
	for (auto i : kun)
	 cout << i << endl;
	 return 0;
}