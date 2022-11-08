#include<iostream>

int main() {
	bool b = 1007;
	int i = b;
	i = 3.14;
	double pi = i;
	unsigned char c = -1;
	//signed char c2 = 256;
	std::cout << "b: " << b << "  "
			  << "i: " << i << "  "
			  << "pi: " << pi << "  "
			  << "c: " << c << "  " 
			  << std::endl;
			 // << "c2" << c2 << std::endl;
	return 0;
}