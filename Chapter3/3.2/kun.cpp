#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/*int main() {
	string kun;
	while (cin >> kun)
		cout << kun << endl;
	return 0;
}*/

int main() {
	string kun;
	while (getline(cin, kun))
		cout << kun << endl;
	return 0;
}