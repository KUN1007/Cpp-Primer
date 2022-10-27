#include<iostream>
#include<vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
	vector<int> kun{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (auto a = kun.begin(); a != kun.end(); ++a)
		*a = (*a)*(*a);
	for (auto i : kun)
		cout << i << "\t";
	cout << endl;
	return 0;
}