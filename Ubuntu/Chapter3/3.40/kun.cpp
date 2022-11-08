#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main() {
	char kun[]= "CUTEST!";
	char yuyu[]= "azkhx";
	char azkhx[sizeof(kun) / sizeof(*kun) + sizeof(yuyu) / sizeof(*yuyu) - 1];

	// char azkhx[strlen(kun) + strlen(yuyu) - 1];
	
	strcpy(azkhx, strcat(kun, yuyu));
	cout << azkhx << endl;
	return 0;
}