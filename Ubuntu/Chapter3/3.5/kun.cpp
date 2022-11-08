#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	string kun, yuyu;
	while (cin >> kun)
		yuyu = yuyu + "," + kun;
	cout << yuyu << endl;
	return 0;
}