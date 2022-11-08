#include<iostream>

int main(){
	int kun = 1007, yuyu = 26;
	int* p = &yuyu;
	std::cout << "1 p: " << p
			  << "     1 *p: " << *p << std::endl;
	std::cout << "1 yuyu: " << yuyu
			  << "     1 kun: " << kun << std::endl;
	*p = 721;
	p = &kun;
	std::cout << "2 p: " << p
			  << "     2 *p: " << *p << std::endl;
    std::cout << "2 yuyu: " << yuyu
  			  << "     2 kun: " << kun << std::endl;
	return 0;
}