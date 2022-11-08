#include<iostream>
#include<vector>

using namespace std;

int main() {
	int int_arr[] = {0, 1, 2, 3, 4, 5};
	vector<int> ivec(begin(int_arr), end(int_arr));
	vector<int> subVec(int_arr + 1, int_arr + 4);

	for (auto a : ivec)
		cout << "Ivec:" << a << endl;

	for (auto a : subVec)
		cout << "subVec:" << a << endl;

	return 0;
}