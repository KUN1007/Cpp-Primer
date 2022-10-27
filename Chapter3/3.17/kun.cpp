#include<iostream>
#include<vector>
#include<cctype>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
	string yuyu;
	vector<string> kun;
	while (cin >> yuyu)
		// yuyu = toupper(yuyu);
		kun.push_back(yuyu);
	// for (decltype(kun.size()) i = 0; i != kun.size(); i++)
	// 	cout << toupper(kun[0]) << endl;

	for (auto &i : kun){
		for (auto &j : i){
			j = toupper(j);	
		}
		cout << i << endl;
	}
			
		// for (decltype(i.size()) j = 0; j < i.size(); ++j){
			// cout << toupper(i[j]);
			// if (isspace(i[j]))
			// 	cout << endl;	
		// }
			
	return 0;
}
