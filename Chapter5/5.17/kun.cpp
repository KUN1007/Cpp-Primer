#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> v1{ 1, 2, 3, 4 ,5 };
	vector<int> v2{ 1, 2, 3, 4 ,5 };
	int num1 = 0;
	size_t num2 = 0;
	//while (cin >> num1)
	//	v1.push_back(num1);
	//while (cin >> num1)
	//	v2.push_back(num1);
	//for (auto i : v1)
	//	cout << i << endl;
	//for (auto i : v2)
	//	cout << i << endl;
	if (v1.empty() || v2.empty()) {
		cout << "False1" << endl;
		return 0;
	}
	if (v1.size() != v2.size()) {
		cout << "False2" << endl;
		return 0;
	}
	for (auto i = v1.begin(), j = v1.end(); i != j; ++i, ++num2) {
		if (v1[num2] != v2[num2]) {
			cout << "False3" << endl;
			return 0;
		}
	}
	cout << "true" << endl;
	return 0;
}