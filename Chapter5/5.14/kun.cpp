#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
	vector<string> tolString;
	ptrdiff_t result;
	string currString, preString, maxString, symString;
	int currCnt = 1, maxCnt = 0;
	while (cin >> currString) {
		if (currString == preString) {
			++currCnt;
			tolString.push_back(currString);
			if (currCnt > maxCnt) {
				maxCnt = currCnt;
				maxString = currString;
			}
		}
	}
	result = tolString.end() - tolString.begin();
	if (maxCnt > 1)
		cout << "Word " << maxString << " appeared " << result << " times" << endl;
	else 
		cout << "Every words appeared once." << endl;
	return 0;
}