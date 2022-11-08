#include<iostream>
#include<string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
	string str1, str2;
	bool flag = 1;
	do {
		cin >> str1 >> str2;
		if (str1.size() < str2.size())
			cout << str1 << endl;
		else if (str1.size() > str2.size())
			cout << str2 << endl;
		else
			cout << "str1 equals str2" << endl;
		cout << "Press 0 to exit, 1 to continue" << endl;
		cin >> flag;
		if (flag != 0 || flag != 1) {
			cout << "Invalid input!" << endl;
			return -1;
		}
	} while (flag);
	return 0;
}