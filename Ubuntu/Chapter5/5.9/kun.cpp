#include<iostream>

using namespace std;

int main() {
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char chr;
	while (cin >> chr) {
		if (chr == 'a')
			++aCnt;
		if (chr == 'e')
			++eCnt;
		if (chr == 'i')
			++iCnt;
		if (chr == 'o')
			++oCnt;
		if (chr == 'u')
			++uCnt;
	}
	cout << "a: " << aCnt << endl
		 << "e: " << eCnt << endl
		 << "i: " << iCnt << endl
		 << "o: " << oCnt << endl
		 << "u: " << uCnt << endl;
	return 0;
}