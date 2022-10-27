#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> kun{1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (auto &a : kun)
		if (!(a % 2)) {
			a *= a;
			cout << a << endl;
		}
	return 0;
}