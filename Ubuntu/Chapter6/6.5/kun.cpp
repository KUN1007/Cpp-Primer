#include<iostream>

int abs(int i) {
	int flag = i;
	if (i < 0)
		return -flag;
	if (i >= 0)
		return flag;
}

int main() {
	int num = 0;
	std::cin >> num;
	std::cout << abs(num) << std::endl;
	return 0;
}