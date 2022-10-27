#include<iostream>

using namespace std;

/*
int main() {
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, ispace = 0;
	char chr;
	while (cin >> chr) {
		if (chr == '\n' || chr == ' ' || chr == '\t')
			++ispace;
		chr = tolower(chr);
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
		 << "u: " << uCnt << endl
		 << "space: " << ispace << endl;
	return 0;
}
*/

int main() {
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	unsigned spaceCnt = 0, tabCnt = 0, newlineCnt = 0;
	char chr;
	while (cin.get(chr))
		switch (chr) {
			case 'A':
			case 'a':
				++aCnt;
				break;
			case 'E':
			case 'e':
				++eCnt;
				break;
			case 'I':
			case 'i':
				++iCnt;
				break;
			case 'O':
			case 'o':
				++oCnt;
				break;
			case 'U':
			case 'u':
				++uCnt;
				break;
			case ' ':
				++spaceCnt;
				break;
			case '\t':
				++tabCnt;
				break;
			case '\n':
				++newlineCnt;
				break;
		}
	cout << "a: " << aCnt << endl
		 << "e: " << eCnt << endl
		 << "i: " << iCnt << endl
		 << "o: " << oCnt << endl
		 << "u: " << uCnt << endl
		 << "space: " << spaceCnt << endl
		 << "tab: " << tabCnt << endl
		 << "newline: " << newlineCnt << endl;
	return 0;
}