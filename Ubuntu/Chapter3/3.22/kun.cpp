#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/*int main() {
	string kun;
	while (cin >> kun) {
		cout << kun << endl;	
	}
	return 0;
}*/

/*int main() {
	string kun;
	while (getline(cin, kun))
		cout << kun << endl;
	return 0;
}*/

/*int main() {
	string kun;
	while (getline(cin, kun))
		if (!kun.empty())
			cout << kun << endl;
	return 0;
}*/

/*int main() {
	string kun;
	while (getline(cin, kun))
		if (kun.size() > 10)
			cout << kun << endl;
	return 0;
}*/

int main() {
	string str = "Hello";
	string phrase = "Hello World";
	string slang = "Hiya";
	if (slang > phrase)
		cout << "large" << endl;
	else 
		cout << "small" << endl;
	return 0;
}