#include<iostream>

int main() {
	int i = 0, j = 0;
	std::cout << "Please input two number: ";
	std::cin >> i >> j;
	while (i > j) {
		std::cout << "Input error,please try again." << std::endl;
		std::cout << "Please input two number: ";
		std::cin >> i >> j;
		while (i < j) {
			std::cout << i << std::endl;
			++i;
		}
	}
	return 0;
}