#include<iostream>
#include<cctype>

using std::string;
using std::cin;
using std::cout;
using std::endl;

/*int main() {
	string str("KUN IS CUTEST!");
	for (auto &c : str)
		cout << c << endl;
	return 0;
}*/


/*int main() {
	string str("KUN IS CUTEST!");
	for (auto &c : str)
		c = tolower(c);
	cout << str <<endl;
	return 0;
}*/

/*int main() {
	string str("akora!!!!!");
	// decltype(str.size()) str_cnt = 0;
	int str_cnt = 0;
	for (auto c : str)
		if (ispunct(c))
			++str_cnt;
	cout << str << " has"
		 << str_cnt << " punctuation" << endl;
	return 0;
}*/

/*int main() {
	string str("kun is cutest");
	for (auto &c : str)
		c = toupper(c);
	cout << str << endl;
	return 0;
}*/

/*int main() {
	string str("KUN");
	if (!str.empty())
		cout << str[0] << endl;
	return 0;
}*/

/*int main() {
	string str("KUN");
	// string c = &str;       // ERROR
	if (!str.empty())
		// tolower(str[0]);
		// c[0] = tolower(c[0]);        // ERROR
		str[0] = tolower(str[0]);
	cout << str << endl;
	return 0;
}*/

/*int main() {
	string str("kun is cutest!");
	for (decltype(str.size()) i = 0; i != str.size() && !isspace(str[i]); ++i)
		str[i] = toupper(str[i]);
	cout << str << endl;
	return 0;
}*/

int main() {
	string str("0123456789ABCDEF");
	cout << "Enter a series of numbers between 0 and 15"
		 << " separated by spaces. Hit ENTER when finished: "
		 << endl;
	string result;
	string::size_type n;
	while (cin >> n)
		if (n < str.size())
			result += str[n];
	cout << "You hex number is: " << result << endl;
	return 0;
}