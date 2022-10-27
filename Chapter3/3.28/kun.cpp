#include<iostream>

using std::string;
using std::cout;
using std::endl;

string sa[10];
int ia[10];

int main() {
	string sa2[10];
	int ia2[10];

	for (auto i : sa)
		cout << i << endl;
		
	for (auto i : ia)
		cout << i << endl;

	for (auto i : sa2)
		cout << i << endl;

	for (auto i : ia2)
		cout << i << endl;

	return 0;
}