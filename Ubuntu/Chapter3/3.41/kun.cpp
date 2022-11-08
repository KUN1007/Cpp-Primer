#include<iostream>
#include<vector>

using namespace std;

int main() {
	int kun[] = {1, 2, 3, 4, 5, 6, 7};
	vector<int> yuyu(begin(kun), end(kun));
	for (auto a : kun)
		cout << a << endl;
	return 0;
}