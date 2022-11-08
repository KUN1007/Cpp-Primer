#include<iostream>

using namespace std;

int main() {
	int i = 0, j;
	j = ++i;
	cout << "j: " << j << "i: " << i << endl;
	j = ++i;
	cout << "j: " << j << "i: " << i << endl;
	
	return 0;
}