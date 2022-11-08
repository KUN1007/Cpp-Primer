#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/*int main() {
	string yuyu, kun;
	cin >> kun >> yuyu;
	if (kun == yuyu)
		cout << kun << " " << yuyu << endl;
	else if (kun > yuyu)
		cout << kun << endl;
	else
		cout << yuyu << endl;
	
	return 0;
}*/

int main() {
	string yuyu, kun;
	cin >> yuyu >> kun;
	if (kun.size() == yuyu.size())
		cout << kun << " " << yuyu << endl;
	else if (kun.size() > yuyu.size())
		cout << kun << endl;
	else
		cout << yuyu << endl;
	return 0;
}