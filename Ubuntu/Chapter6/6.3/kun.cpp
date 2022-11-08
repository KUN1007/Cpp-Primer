#include<iostream>

int fact(int i) {
	int flag = 1;
	while (i > 1)
		flag *= i--;
	std::cout << flag << std::endl;
	return flag;
}

int main() {
	int num = 0;
	std::cin >> num;
	fact(num);
	return 0; 
}