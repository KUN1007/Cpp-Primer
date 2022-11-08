#include<iostream>
#include<vector>

using namespace std;

/*
int main() {
	int kun[] = { 1, 2, 3, 4, 5 };
	int yuyu[] = { 1, 2, 3, 4, 5 };

	vector<int> kun1{ 1, 2, 3, 4, 5 };
	vector<int> yuyu1{ 1, 2, 3, 4, 5 };
	if (kun1 == yuyu1)
		cout << "Ture" << endl;
	else
		cout << "Fault" << endl;
	return 0;
}
*/

int main() {
	int kun[] = { 1, 2, 3, 4, 5 };
	int yuyu[] = { 1, 2, 3, 4, 5 };

	/*
	if (kun[0])
	for (decltype(kun) i = 0; i != kun.end() - 1; ++i)
		if (kun[*i] == yuyu[*i])
			if (i == kun.end() - 1)
				cout << "Ture" << endl;
		else
			cout << "Fault" << endl;
	return 0;
	*/                                           // ERROR

	int kun_len = sizeof(kun) / sizeof(*kun);
	int yuyu_len = sizeof(yuyu) / sizeof(*yuyu);

	if (kun_len != yuyu_len)
		cout << "Fault" << endl;
	else 
		for (int i = 0; i != kun_len; ++i)
			if (kun[i] != yuyu[i])
				cout << "Fault" << endl;
			else if (i == kun_len - 1)
				cout << "Ture" << endl;
	return 0;
}