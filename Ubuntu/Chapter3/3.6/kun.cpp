#include<iostream>

using std::cout;
using std::string;
using std::endl;

/*int main() {
	string str("KUN IS CUTEST~!");
	for (decltype(str.size()) i = 0; i < str.size(); ++i)
		cout << "X";
	return 0;
}*/

int main() {
	string str("KUN IS CUTEST~!");
	for (char &c : str)
		c = 'X';
//		c = "X";                   // ERROR
	cout << str << endl;
}