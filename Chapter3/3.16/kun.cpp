#include<iostream>
#include<vector>

using std::string;
using std::vector;
using std::cout;
using std::endl;

int main() {
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};

	for (auto i : v1)
		cout << "v1: " << i << endl;

	for (auto i : v2)
		cout << "v2: " << i << endl;

	for (auto i : v3)
		cout << "v3: " << i << endl;

	for (auto i : v4)
		cout << "v4: " << i << endl;
		
	for (auto i : v5)
		cout << "v5: " << i << endl;

	for (auto i : v6)
		cout << "v6: " << i << endl;

	for (auto i : v7)
		cout << "v7: " << i << endl;

	return 0;
}