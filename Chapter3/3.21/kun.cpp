#include<iostream>
#include<vector>
#include<cctype>

using std::cout;
using std::vector;
using std::string;
using std::endl;

int main() {
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};

	for (auto a = v1.cbegin(); a != v1.cend(); ++a)
		cout << "v1: " << *a << endl;

	for (auto a = v2.cbegin(); a != v2.cend(); ++a)
		cout << "v2: " << *a << endl;

	for (auto a = v3.cbegin(); a != v3.cend(); ++a)
		cout << "v3: " << *a << endl;

	for (auto a = v4.cbegin(); a != v4.cend(); ++a)
		cout << "v4: " << *a << endl;

	for (auto a = v5.cbegin(); a != v5.cend(); ++a)
		cout << "v5: " << *a << endl;

	for (auto a = v6.cbegin(); a != v6.cend(); ++a)
		cout << "v6: " << *a << endl;

	for (auto a = v7.cbegin(); a != v7.cend(); ++a)
		cout << "v7: " << *a << endl;

	return 0;
}
