#include<iostream>

int main(){
	int i = 1;
	int &r1 = i;
	r1 = 1007;
	std::cout << "i: " << i
		   	  << "r1: " << r1 << std::endl;
	//const int &r2 = i;
	//r2 = 999;
	//std::cout << "i: " << i
	//		  << "r2: " << r2 << std::endl;
	return 0;
}