#include<iostream>

int main(){
	std::cout << "2\x4d" << std::endl;
	std::cout << 2 << "\\t"
			  << "\x4d" << std::endl;
	return 0;
}