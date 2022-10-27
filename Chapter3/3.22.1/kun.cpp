#include<iostream>
#include<vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
	string kun("kun is cutest~!");
	for (auto a = kun.begin(); a != kun.end(); ++a)
		*a = toupper(*a);
	cout << kun << endl;
	return 0;
}