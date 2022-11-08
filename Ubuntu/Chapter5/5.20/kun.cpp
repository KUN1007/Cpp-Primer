#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
	vector<string> tolString;
	string str, flagString;
	while (cin >> str)
		tolString.push_back(str);
	for (auto i = tolString.begin(); i != tolString.end(); ++i) {
		if (flagString == *i) {
			cout << flagString << endl;
			break;		
		}
		if (i == tolString.end() - 1) {
			cout << "No repetition" << endl;
			break;
		}
		flagString = *i;	
	}
	return 0;
}