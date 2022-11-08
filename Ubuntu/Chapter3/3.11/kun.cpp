#include<iostream>

using std::string;
using std::cout;
using std::endl;

int main() {
	const string s = "Keep out!";
	for (const char &c : s){
		cout << c << endl;
	}
	return 0;
}