#include<iostream>

using namespace std;

int main() {
	unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
	string str, pstr = nullptr;
	size_t i = 0;
	char *pchr;
	while (cin >> str) {
		pchr = &str[i];
		if (*pchr == 'f')
			switch (++*pchr) {
				case 'f':
					++ffCnt;
					break;
				case 'l':
					++flCnt;
					break;
				case 'i':
					++fiCnt;
					break;
			}
		++i;
	}
	return 0;
}