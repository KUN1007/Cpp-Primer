#include<iostream>

using namespace std;

int main() {
	int i = 10;
	double d = 7.77;
	int result = i *= static_cast<int>(d);
	cout << result << endl;
	return 0;
}