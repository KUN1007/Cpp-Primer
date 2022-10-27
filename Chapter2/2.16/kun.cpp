#include<iostream>

//int main(){
//	int i = 1007;
//	int &value = i;
//	int temp = value;
//	std::cout << temp << std::endl;
//	return 0;
//}

int main(){
	int i = 0, &r1 = i;
	double d = 0, &r2 = d;//       &r2 = kun; ERROR!
//	std::cout << "r2: " << r2 << std::endl;          
//	std::cout << "r3: " << r3 << std::endl;
//	r2 = 3.14159;
//	std::cout << "r2: " << r2 << std::endl;
//	std::cout << "d: " << d << std::endl;
//	r2 = r1;
//	std::cout << r2 << std::endl;
//	i = r2;
//	std::cout << i << std::endl;
	r1 = d;
	std::cout << r1 << std::endl; 
//	std::cout << "r2: " << r2
//			  << "i: " << i
//			  << "r1: " << r1 << std::endl;
	return 0;
}