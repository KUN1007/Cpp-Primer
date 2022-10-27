#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main() {
	string kun = "CUTEST!";
	string yuyu = "Excellent!";
	char kun1[] = "azkhx";
	char yuyu1[] = "azkbx";
	if (strcmp(kun1, yuyu1)) {
		if (strcmp(kun1, yuyu1) < 0)
			cout << "kun1 < yuyu1" << endl;
		else if (strcmp(kun1, yuyu1) > 0)
			cout << "kun1 > yuyu1" << endl;
	} else 
		cout << "kun1 = yuyu1" << endl;

	if (kun == yuyu)
		cout << "kun = yuyu" << endl;
	else if (kun < yuyu)
		cout << "kun < yuyu" << endl;
	else
		cout << "kun > yuyu" << endl;

	return 0;
		
}