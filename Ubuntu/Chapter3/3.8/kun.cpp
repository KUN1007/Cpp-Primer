#include<iostream>

using std::string;
using std::cout;
using std::endl;

int main() {
	string str("KUN IS CUTEST~!");
	string::size_type i = str.size();
	while (i > 0) {
		char &c = str[i];
		c = 'X';
		--i;	
	}
	str[0] = 'X';
	cout << str << endl;
	return 0; 
}